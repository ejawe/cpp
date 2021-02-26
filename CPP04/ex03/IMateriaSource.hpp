/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:42:23 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 19:42:24 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_METERIA_SOURCE_H
# define I_METERIA_SOURCE_H

#include "AMateria.hpp"
# include <iostream>
# include <string>

class IMateriaSource
{

public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* src) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif