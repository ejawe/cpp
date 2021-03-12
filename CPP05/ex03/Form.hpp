/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:20:32 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 17:47:31 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{

private:
	std::string const	_name;
	int	const			_gradeSign;
	int const			_gradeExec;
	bool				_signed;
	std::string			_target;
	Form();

public:
	Form(std::string const name, int gardeSign, int gradeExec);
	Form(const Form &src);
	virtual ~Form();

	Form &operator=(Form const &rhs);

	std::string const	getName() const;
	int					getGradeSign() const;
	int					getGradeExec() const;
	bool				getSigned() const;
	std::string			getTarget() const;
	void				setTarget(std::string target);
	void				setSigned(bool sign);
	void				beSigned(Bureaucrat &bur);
	void				checkExecution(Bureaucrat const &bur) const;
	virtual void		execute(Bureaucrat const &) const = 0;
	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class NotSignException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream & operator<<( std::ostream &o, Form const &rhs);

#endif