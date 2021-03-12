/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:22:26 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 15:34:27 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

	virtual void	execute (Bureaucrat const &bur) const;
};


#endif