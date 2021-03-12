/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:51:33 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 19:38:25 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

private:
	
public:
	Intern();
	Intern(const Intern &src);
	~Intern();

	Intern &operator=(Intern const &rhs);

	Form*	newShrubbery(std::string target);
	Form*	newRobotomy(std::string target);
	Form*	newPresidential(std::string target);
	Form*	makeForm(std::string formName, std::string target);
	
};


#endif