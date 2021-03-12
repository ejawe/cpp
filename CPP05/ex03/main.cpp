/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:55:02 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 19:59:21 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <string>
#include <exception>

int main()
{
	std::cout << "--------------------Creation form ShrubberyCreationForm et 2 bureaucrates" << std::endl;
	Intern intern;

	Form *formSh;
	formSh = intern.makeForm("false form", "home");
	formSh = intern.makeForm("shrubbery creation", "home");
	if (formSh == NULL)
	{
		std::cout << "Error: Wrong form name" << std::endl;
		return 0;
	}
	std::cout << *formSh << std::endl;
	Bureaucrat charle = Bureaucrat("Charle", 146);
	std::cout << charle << std::endl;
	Bureaucrat lili = Bureaucrat("Lili", 138);
	std::cout << lili << std::endl;

	std::cout << std::endl;
	std::cout << "--------------------Execution par Lili sans signature" << std::endl;
	lili.executeForm(*formSh);
	std::cout << std::endl;
	std::cout << "--------------------Signature par charle" << std::endl;
	charle.signForm(*formSh);
	std::cout << *formSh << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------Increment grade Charle" << std::endl;
	charle.incrementGrade();
	std::cout << charle << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------Signature par charle" << std::endl;
	charle.signForm(*formSh);
	std::cout << *formSh << std::endl;
	std::cout << std::endl;
	
	std::cout << "--------------------Execution par Lili" << std::endl;
	lili.executeForm(*formSh);
	std::cout << std::endl;
	std::cout << "--------------------Increment grade Lili" << std::endl;
	lili.incrementGrade();
	std::cout << lili << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------Execution par Lili" << std::endl;
	lili.executeForm(*formSh);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "--------------------Creation form RobotomyRequestForm" << std::endl;
	Form *formRb;
	formRb = intern.makeForm("robotomy request", "truc");
	if (formRb == NULL)
	{
		std::cout << "Error: Wrong form name" << std::endl;
		return 0;
	}
	std::cout << *formRb << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------Signature par charle" << std::endl;
	charle.signForm(*formRb);
	std::cout << *formRb << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------Creation 2 bureaucrates" << std::endl;
	Bureaucrat fifi = Bureaucrat("Fifi", 2);
	std::cout << fifi << std::endl;
	Bureaucrat loulou = Bureaucrat("Loulou", 25);
	std::cout << loulou << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------Signature par Loulou" << std::endl;
	loulou.signForm(*formRb);
	std::cout << *formRb << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------Execution par Fifi" << std::endl;
	fifi.executeForm(*formRb);

	delete formSh;
	delete formRb;
	return 0;
}