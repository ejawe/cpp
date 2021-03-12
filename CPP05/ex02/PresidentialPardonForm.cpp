/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 14:46:13 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 14:47:19 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : 
Form("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
Form(src)
{

}

PresidentialPardonForm &      PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		this->setSigned(rhs.getSigned());
		this->setTarget(rhs.getTarget());
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void	PresidentialPardonForm::execute (Bureaucrat const &bur) const
{
	checkExecution(bur);
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return;
}