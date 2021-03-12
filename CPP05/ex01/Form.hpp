/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:20:32 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/04 16:20:34 by ejawe            ###   ########.fr       */
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
	Form();

public:
	Form(std::string const name, int gardeSign, int gradeExec);
	Form(const Form &src);
	~Form();

	Form &operator=(Form const &rhs);

	std::string const	getName() const;
	int					getGradeSign() const;
	int					getGradeExec() const;
	bool				getSigned() const;

	void				beSigned(Bureaucrat &bur);
	

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
};

std::ostream & operator<<( std::ostream &o, Form const &rhs);

#endif