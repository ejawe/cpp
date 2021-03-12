/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 14:45:25 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/05 15:34:55 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H
# define PRESIDENTIAL_PARDON_FORM_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{

private:
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

	virtual void	execute (Bureaucrat const &bur) const;

};


#endif