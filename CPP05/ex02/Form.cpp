/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:20:38 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 16:34:10 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int gardeSign, int gradeExec) : 
_name(name), 
_gradeSign(gardeSign), 
_gradeExec(gradeExec),
_signed(false)
{
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw Form::GradeTooLowException();
	return;
}

Form::Form(const Form &src) :
_name(src._name), 
_gradeSign(src._gradeSign), 
_gradeExec(src._gradeExec),
_signed(false)
{
    *this = src;
    return;
}

Form &      Form::operator=(Form const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
		this->_signed = rhs._signed;
    return *this;
}
Form::~Form()
{

}

std::string const	Form::getName() const
{
	return this->_name;
}

int					Form::getGradeSign() const
{
	return this->_gradeSign;
}

int					Form::getGradeExec() const
{
	return this->_gradeExec;
}

bool				Form::getSigned() const
{
	return this->_signed;
}

std::string			Form::getTarget()const
{
	return this->_target;
}

void				Form::setTarget(std::string target)
{
	this->_target = target;
}

void				Form::setSigned(bool sign)
{
	this->_signed = sign;
}

const char* 		Form::GradeTooHighException::what() const throw()
{
	return "Grade to high for sign";
}

const char* 		Form::GradeTooLowException::what() const throw()
{
	return "Grade to low for sign";
}

const char* 		Form::NotSignException::what() const throw()
{
	return "The form is not signed";
}

void				Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

void				Form::checkExecution(Bureaucrat const &bur) const
{
	if (this->_signed == false)
		throw Form::NotSignException();
	if (bur.getGrade() > this->_gradeExec)
		throw Form::GradeTooLowException();
	return;
}

std::ostream & operator<<( std::ostream &o, Form const &rhs)
{
    o << "< " << rhs.getName() << " >, Form grade to sign [" << rhs.getGradeSign() << "], Form grade to exec [" \
	<< rhs.getGradeExec() <<"], State [" << rhs.getSigned() << "]";
    return o;
}
