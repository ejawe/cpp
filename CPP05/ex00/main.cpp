/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:55:02 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/02 16:55:03 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "--------------------Test erreur création Bureaucrate garde trop bas" << std::endl;
	try
	{
		Bureaucrat charle = Bureaucrat("Charle", 200);
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------Test erreur création Bureaucrate garde trop haut" << std::endl;
	try
	{
		Bureaucrat julie = Bureaucrat("Julie", 0);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--------------------Test incrementation et décrémentation grade" << std::endl;
	try
	{
		Bureaucrat lili = Bureaucrat("Lili", 20);
		Bureaucrat riri = Bureaucrat("Riri", 50);
		std::cout << "--------------------Avant" << std::endl;
		std::cout << lili << std::endl;
		std::cout << riri << std::endl;
		lili.incrementGrade();
		riri.decrementGrade();
		std::cout << "--------------------Après : increment Lili, decrement Rifi" << std::endl;
		std::cout << lili << std::endl;
		std::cout << riri << std::endl;
		lili.decrementGrade();
		riri.incrementGrade();
		std::cout << "--------------------Après : decrement Lili, increment Rifi" << std::endl;
		std::cout << lili << std::endl;
		std::cout << riri << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------Test incrementation grade 1" << std::endl;
	try
	{
		Bureaucrat loulou = Bureaucrat("Loulou", 1);
		std::cout << "--------------------Avant" << std::endl;
		std::cout << loulou << std::endl;
		loulou.incrementGrade();
		std::cout << "--------------------Après" << std::endl;
		std::cout << loulou << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}