/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:55:11 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 17:02:44 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name)
{
    *this = src;
    return;
}

Bureaucrat &      Bureaucrat::operator=(Bureaucrat const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
		this->_grade = rhs._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{

}


void			Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
	return;
}

void			Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
	return;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade to high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade to low";
}

std::string const	Bureaucrat::getName() const
{
	return this->_name;
}

int 				Bureaucrat::getGrade() const
{
	return this->_grade;
}

void				Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "< " << this->_name << " > sign < " << form.getName() << " >" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "< " << this->_name << " > cant sign < " << form.getName() << " > because ";
		std::cerr << e.what() << std::endl;
	}
	return;
}

std::ostream & operator<<( std::ostream &o, Bureaucrat const &rhs)
{
    o << "< " << rhs.getName() << " >, bureaucrat grade " << rhs.getGrade() << ".";
    return o;
}