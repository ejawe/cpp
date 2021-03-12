/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 14:18:34 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 15:34:45 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
# define ROBOTOMY_REQUEST_FORM_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{

private:
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

	virtual void	execute (Bureaucrat const &bur) const;

};


#endif