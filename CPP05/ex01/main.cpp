/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:55:02 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/04 16:19:47 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include <exception>

int main()
{
	std::cout << "--------------------Test form garde trop bas" << std::endl;
	try
	{
		Form form0 = Form("contrat0", 151, 10);
		
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "--------------------Test form garde trop haut" << std::endl;
	try
	{
		Form form1 = Form("contrat1", 0, 10);
		
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "--------------------Création 2 bureaucrates" << std::endl;
	Bureaucrat charle = Bureaucrat("Charle", 120);
	std::cout << charle << std::endl;
	Bureaucrat lili = Bureaucrat("Lili", 40);
	std::cout << lili << std::endl;
	std::cout << "--------------------Création 1 formulaire" << std::endl;
	Form form2 = Form("contrat2", 100, 10);
	std::cout << form2 << std::endl;

	std::cout << std::endl;
	std::cout << "--------------------Test signature garde trop bas" << std::endl;
	charle.signForm(form2);
	std::cout << form2 << std::endl;

	std::cout << std::endl;
	std::cout << "--------------------Test signature garde ok" << std::endl;
	lili.signForm(form2);
	std::cout << form2 << std::endl;

	return 0;
}