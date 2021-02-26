/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:42:14 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 19:42:14 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
    Ice();
    Ice(const Ice &src);
    Ice &operator=(const Ice &rhs);
    virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

};

#endif