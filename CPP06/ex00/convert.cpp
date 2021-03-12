/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:12:55 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/11 13:18:05 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	checkInt(double value)
{

	if (value >= INT_MIN && value <= INT_MAX)
		return true;
	return false;
}

bool	checkFloat(double value)
{
	if ((std::abs(value) >= FLT_MIN && std::abs(value) <= FLT_MAX) ||
	value == 0)
		return true;
	return false;
}

bool	checkDouble(double value)
{
	if ((std::abs(value) >= DBL_MIN && std::abs(value) <= DBL_MAX) ||
	value == 0)
		return true;
	return false;
}

bool	checkChar(std::string str)
{
	if (str.length() == 1 && isprint(str[0]) && isalpha(str[0]))
		return true;
	return false;
}

int		isChar(double d)
{
	if (d >= 32 && d <= 126)
		return DISPLAYABLE;
	if (d >= CHAR_MIN && d <= CHAR_MAX)
		return NOT_DISPLAYABLE;
	return IMPOSSIBLE;
}

void	convertChar(char *str)
{
	char c = str[0];
	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);
	std::cout << "char: '" << c << "'" << std::endl;
	if (checkInt(d))
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (checkFloat(d))
		std::cout << "float: "  << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
	std::cout << "double: " << d << std::endl;
	return;
}

void	convertInt(char *str)
{
	int i = atoi(str);
	char c = static_cast<char>(i);
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);
	if (isChar(d) == DISPLAYABLE)
		std::cout << "char: '" << c << "'" << std::endl;
	else if (isChar(d) == NOT_DISPLAYABLE)
		std::cout << "char: Non displayable" << std::endl;
	else if (isChar(d) == IMPOSSIBLE)
		std::cout << "char: Impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	if (checkFloat(d) && floor(f) == f)
		std::cout << "float: "  << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	else if (checkFloat(d))
		std::cout << "float: "  << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	return;
}

void	convertFloat(char* str)
{
	float f = atof(str);
	char c = static_cast<char>(f);
	int i = static_cast<int>(f);
	double d = static_cast<double>(f);
	if (isChar(d) == DISPLAYABLE)
		std::cout << "char: '" << c << "'" << std::endl;
	else if (isChar(d) == NOT_DISPLAYABLE)
		std::cout << "char: Non displayable" << std::endl;
	else if (isChar(d) == IMPOSSIBLE)
		std::cout << "char: Impossible" << std::endl;
	if (checkInt(d))
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (checkFloat(d) && floor(f) == f)
		std::cout << "float: "  << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	else if (checkFloat(d))
		std::cout << "float: "  << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	convertDouble(char *str)
{
	double d = atof(str);
	char c = static_cast<char>(d);
	int i = static_cast<int>(d);
	float f = static_cast<float>(d);
	if (isChar(d) == 1)
		std::cout << "char: '" << c << "'" << std::endl;
	else if (isChar(d) == 2)
		std::cout << "char: Non displayable" << std::endl;
	else if (isChar(d) == 0)
		std::cout << "char: Impossible" << std::endl;
	if (checkInt(d))
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (checkFloat(d) && floor(f) == f)
		std::cout << "float: "  << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	else if (checkFloat(d))
		std::cout << "float: "  << f << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	convertType(char* str)
{
	if (checkError(str) == false)
		throw std::string("Conversion imposible");
	std::string strg = str;
	double value = atof(strg.c_str());
	if (specialValue(str))
		printSpecial(str);
	else if(checkChar(str))
		convertChar(str);
	else if(checkFloat(value) && strstr(str, "."))
		convertFloat(str);
	else if (checkDouble(value))
		convertDouble(str);
	else if (checkInt(value))
		convertInt(str);
	else
		throw std::string("Conversion imposible");
	return;
}