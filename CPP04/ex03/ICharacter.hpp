/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:42:18 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 19:42:19 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_CHARACTERE
# define I_CHARACTERE

#include <string>
#include <iostream>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{

public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;

};

#endif