/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/07 18:45:45 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

Base * generate(void)
{
	int	rez;

	std::srand(time(0));
	rez = std::rand() % 3;
	std::cout << "[generete]" << std::endl;
	switch (rez)
	{
		case 0:
			std::cout << "Created class A" << std::endl;
			return (new A);
		case 1:
			std::cout << "Created class B" << std::endl;
			return (new B);
		case 2:
			std::cout << "Created class C" << std::endl;
			return (new C);
	}
	return (NULL);
}

void identify(Base* p)
{
	std::cout << "[identify by pointer]" << std::endl;
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "type of pointer is A" << std::endl;
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "type of pointer is B" << std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "type of pointer is C" << std::endl;
}

void identify(Base& p)
{
	A	a;
	B	b;
	C	c;

	std::cout << "[identify by reference]" << std::endl;
	try
	{
		a = dynamic_cast<A &>(p);
		std::cout << "type of reference is A" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();// << std::endl;
		std::cerr << " fail in identify by reference of type A" << std::endl;
	}
	try
	{
		b = dynamic_cast<B &>(p);
		std::cout << "type of reference is B" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();// << std::endl;
		std::cerr << " fail in identify by reference of type B" << std::endl;
	}
	try
	{
		c = dynamic_cast<C &>(p);
		std::cout << "type of reference is C" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();// << std::endl;
		std::cerr << " fail in identify by reference of type C" << std::endl;
	}
}

int main()
{
	Base	*bases = generate();
	identify(bases);
	identify(*bases);
	return 0;
}
