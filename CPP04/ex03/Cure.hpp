/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:42:03 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 19:42:04 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{

public:
    Cure();
    Cure(const Cure &src);
    Cure &operator=(const Cure &rhs);
    virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
	
};

#endif