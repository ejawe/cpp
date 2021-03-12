/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:12:50 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/11 13:42:10 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	specialValue(std::string str)
{
	if (str == "-inf" || str == "+inf" || str == "nan" ||
	str == "-inff" || str == "+inff" || str == "nanf")
		return true;
	return false;
}

void	printSpecial(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "+inf" || str == "+inff")
	{
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (str == "nan" || str == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	return;
}

bool	checkError(std::string str)
{
	int i = 0;
	if (specialValue(str))
		return true;
	if (checkChar(str))
		return true;
	if (str[0] == '+' || str[0] == '-')
		i++;
	if (!isdigit(str[i]))
		return false;
	while(isdigit(str[i]))
		i++;
	if (str[i] == '.')
	{
		i++;
		while(isdigit(str[i]))
			i++;
		if (str[i] == 'f')
			i++;
		if (str[i])
			return false;
	}
	if (str[i])
		return false;
	return true;
}



int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Wrong number of argument." << std::endl;
		return 1;
	}
	try
	{
		convertType(argv[1]);
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	return 0;
}