/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:46:08 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/21 21:46:09 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	std::cout << "-------------------------------Création tableau 5 elements" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "-------------------------------Ajout 1 elements" << std::endl;
	try
	{
		sp.addNumber(71);
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	
	std::cout << "______________________________________________________________________________" << std::endl << std::endl;
	std::cout << "-------------------------------Création tableau capacité 9 avec 5 elements" << std::endl;
	Span sp1 = Span(9);
	sp1.addNumber(3);
	sp1.addNumber(5);
	sp1.addNumber(2);
	sp1.addNumber(6);
	sp1.addNumber(9);
	std::cout << "shortest : " << sp1.shortestSpan() << std::endl;
	std::cout << "longest : " << sp1.longestSpan() << std::endl;
	std::cout << "-------------------------------Ajout rangée de 4 elements" << std::endl;
	try
	{
		sp1.addNumber(10, 14);
		std::cout << "shortest : " << sp1.shortestSpan() << std::endl;
		std::cout << "longest : " << sp1.longestSpan() << std::endl;
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	std::cout << "-------------------------------Ajout rangée de 2 elements" << std::endl;
	try
	{
		sp1.addNumber(10, 12);
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}

	std::cout << "______________________________________________________________________________" << std::endl << std::endl;
	std::cout << "-------------------------------Création tableau capacité 6 avec 0 elements" << std::endl;
	Span sp2 = Span(6);
	std::cout << "-------------------------------Try shortestSpan" << std::endl;
	try
	{
		std::cout << "shortest : " << sp2.shortestSpan() << std::endl;
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	std::cout << "-------------------------------Try longestSpan" << std::endl;
	try
	{
		std::cout << "longest : " << sp2.longestSpan() << std::endl;
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	std::cout << "-------------------------------Ajout 1 elements" << std::endl;
	sp2.addNumber(5);
	std::cout << "-------------------------------Try shortestSpan" << std::endl;
	try
	{
		std::cout << "shortest : " << sp2.shortestSpan() << std::endl;
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	std::cout << "-------------------------------Ajout 2eme elements" << std::endl;
	sp2.addNumber(4);
	std::cout << "-------------------------------Try shortestSpan" << std::endl;
	try
	{
		std::cout << "shortest : " << sp2.shortestSpan() << std::endl;
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	std::cout << "-------------------------------Try longestSpan" << std::endl;
	try
	{
		std::cout << "longest : " << sp2.longestSpan() << std::endl;
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	std::cout << "______________________________________________________________________________" << std::endl << std::endl;
	std::cout << "-------------------------------Création tableau capacité 10 000" << std::endl;
	Span sp3 = Span(10000);
	try
	{
		std::cout << "-------------------------------Ajout 10 000 elements" << std::endl;
		sp3.addNumber(1, 10000);
		std::cout << "-------------------------------Try ajout un element en trop" << std::endl;
		sp3.addNumber(7);
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	std::cout << "shortest : " << sp3.shortestSpan() << std::endl;
	std::cout << "longest : " << sp3.longestSpan() << std::endl;
	return 0;
}