/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/11/03 12:58:45 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	std::string	input;

	if (ac != 2)
	{
		std::cout << "wrong count of arguments" << std::endl;
		return (1);
	}
	input = std::string(av[1]);
	try
	{
		char	c;

		std::cout << "Char: ";
		if (input.length() == 1 && !std::isdigit(input[0]))
			c = input[0];
		else if (std::stoi(input) >= 0 && std::stoi(input) <= 127)
			c = static_cast<char>(std::stoi(input));
		else
			throw "Error of valid char";
		if (std::isprint(c))
			std::cout << c << std::endl;
		else
			throw "The symbol is not printable";
	}
	catch(const char *str)
	{
		std::cerr << str << std::endl;
	}
	catch(...)
	{
		std::cerr << " impossible" << std::endl;
	}
	try
	{
		int	k;

		std::cout << "Integer: ";
		if (input.length() == 1 && !std::isdigit(input[0]) && std::isprint(input[0]))
			k = static_cast<int>(input[0]);
		else
			k = static_cast<int>(std::stoi(input));
		std::cout << k << std::endl;
	}
	catch(...)
	{
		std::cerr << " impossible" << std::endl;
	}
	try
	{
		float	f;

		std::cout << "Float: ";
		if (input.length() == 1 && !std::isdigit(input[0]) && std::isprint(input[0]))
			f = static_cast<float>(input[0]);
		else
			f = static_cast<float>(std::stof(input));
		std::cout << f;
		if (static_cast<int>(f) - f == 0.f && f < 1000000.f)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch(...)
	{
		std::cerr << " impossible" << std::endl;
	}
	try
	{
		double	d;

		std::cout << "Double: ";
		if (input.length() == 1 && !std::isdigit(input[0]) && std::isprint(input[0]))
			d = static_cast<double>(input[0]);
		else
			d = static_cast<double>(std::stod(input));
		std::cout << d;
		if (static_cast<int>(d) - d == 0. && d < 1000000)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch(...)
	{
		std::cerr << " impossible" << std::endl;
	}
	return 0;
}
