/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:52:23 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 19:47:10 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::Intern(const Intern &src)
{
	*this = src;
	return;
}

Intern &      Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}

Intern::~Intern()
{

}

Form*		Intern::newShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form*		Intern::newRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form*		Intern::newPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}


Form*		Intern::makeForm(std::string formName, std::string target)
{
	typedef Form* (Intern::*functForm)(std::string);
	functForm tabForm[] = {
		&Intern::newShrubbery,
		&Intern::newRobotomy,
		&Intern::newPresidential
	};
	std::string name[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	int i = 0;
	while (i < 3)
	{
		if (formName == name[i])
			return (this->*tabForm[i])(target);
		i++;
	}
	std::cout << "This type of form does not exist" << std::endl;
	return NULL;
}