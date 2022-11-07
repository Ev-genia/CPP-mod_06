/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/07 17:51:42 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int			nbr;
	std::string	str;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t	rez;

	rez = reinterpret_cast<uintptr_t>(ptr);
	return (rez);
}

Data* deserialize(uintptr_t raw)
{
	Data	*rez;

	rez = reinterpret_cast<Data *>(raw);
	return (rez);
}

int main()
{
	Data		*test = new Data;
	Data		*afterTest;
	uintptr_t	storage;

	test->nbr = 987;
	test->str = "Hi, everybody!";
	std::cout << "num before: " << test->nbr << std::endl;
	std::cout << "str before: " << test->str << std::endl;
	storage = serialize(test);
	afterTest = deserialize(storage);
	std::cout << "num after func: " << afterTest->nbr << std::endl;
	std::cout << "str after func: " << afterTest->str << std::endl;
	delete test;
	return 0;
}
