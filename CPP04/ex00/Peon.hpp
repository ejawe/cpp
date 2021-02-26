/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:03:12 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:03:13 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

#include "Victim.hpp"

class Peon : public Victim
{

private:
    Peon();

public:
    Peon(std::string name);
    Peon(const Peon &src);
    virtual ~Peon();
    Peon &operator=(Peon const &rhs);

    virtual void    getPolymorphed() const;

};

std::ostream & operator<<( std::ostream &o, Peon const &rhs);

#endif