/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 14:20:52 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 14:40:11 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : 
Form("RobotomyRequestForm", 72, 45)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
Form(src)
{

}

RobotomyRequestForm &      RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		this->setSigned(rhs.getSigned());
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void	RobotomyRequestForm::execute (Bureaucrat const &bur) const
{
	checkExecution(bur);
	if (rand() % 2)
		std::cout << "Bizzzzz Bizzzzzz !!! " << getTarget() << " has been robotomized successfully !" << std::endl;
	else
		std::cout << getTarget() << " failed to robotomize" << std::endl;
	return;
}