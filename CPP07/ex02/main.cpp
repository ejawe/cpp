/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:47:33 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/12 16:47:34 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.cpp"
#include <iostream>
#include <string>

int main(void)
{
	std::cout << "-------------------------------------------------------INT" << std::endl;

	std::cout << "-------------------------------------Contructeur par defaut test" << std::endl;
	try
	{
		Array<int> array1;
		std::cout << "array1 = " << array1 << std::endl;
		std::cout << "-------------------------------------Affectation array1[3] = 3" << std::endl;
		array1[3] = 3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "-------------------------------------Contructeur size array = 5" << std::endl;
	Array<int> array2(5);
	std::cout << "array2 = " << array2 << std::endl;
	std::cout << "-------------------------------------Affectation array2[0] = 1; array2[1] = 2;" << std::endl;
	array2[0] = 1;
	array2[1] = 2;
	std::cout << "array2 = " << array2 << std::endl;
	std::cout << "-------------------------------------Affectation out of limit array2[5] = 6;" << std::endl;
	try
	{
		array2[5] = 6;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}



	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------STRING" << std::endl;
	std::cout << "-------------------------------------Contructeur par defaut test" << std::endl;
	try
	{
		Array<std::string> array3;
		std::cout << "array3 = " << array3 << std::endl;
		std::cout << "-------------------------------------Affectation array3[3] = hello" << std::endl;
		array3[3] = "hello";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "-------------------------------------Contructeur size array = 5" << std::endl;
	Array<std::string> array3(5);
	std::cout << "array3 = " << array3 << std::endl;
	std::cout << "-------------------------------------Affectation array2[0] = hello; array2[1] = allo;" << std::endl;
	array3[0] = "hello";
	array3[1] = "allo";
	std::cout << "array3 = " << array3 << std::endl;
	std::cout << "array3[1] = " << array3[1] << std::endl;
	std::cout << "-------------------------------------Affectation out of limit array3[5] = false;" << std::endl;
	try
	{
		array3[5] = "false";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-------------------------------------------------------STRING COPY" << std::endl;
	Array<std::string> test(array3);
	std::cout << "test = " << test << std::endl;
	test[3] = "salut";
	std::cout << "test = " << test << std::endl;
	std::cout << "array3 = " << array3 << std::endl;
	return 0;
}