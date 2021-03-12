/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:55:18 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 17:02:38 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{

private:
	std::string const	_name;
	int					_grade;
	Bureaucrat();

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string const	getName() const;
	int 				getGrade() const;

	void				incrementGrade();
	void				decrementGrade();

	void				signForm(Form &form);

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

std::ostream & operator<<( std::ostream &o, Bureaucrat const &rhs);

#endif