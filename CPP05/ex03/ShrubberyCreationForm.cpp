/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 14:18:03 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 16:41:54 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : 
Form("ShrubberyCreation", 145, 137)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
Form(src)
{

}

ShrubberyCreationForm &      ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		this->setSigned(rhs.getSigned());
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void	ShrubberyCreationForm::execute (Bureaucrat const &bur) const
{
	checkExecution(bur);
	std::ofstream ofs((getTarget() + "_shrubbery").c_str());
	const std::string tree = 
    "    &%& \n"
    " ,&@%@%&@%,\n"
    ",%&@%&&@&&%\n"
    "%@&@&%@@%&&%\n"
    "%@&%@&%&%%&&\n"
    " @%&&@@&&% \n"   
    "    |@|   \n" 
    "    |@|  \n"
    "   / @ \\ \n";

	ofs << tree;
	ofs.close();
}