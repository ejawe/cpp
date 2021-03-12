/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Neon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:46:02 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/02 11:46:03 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEON_H
# define NEON_H

#include "Victim.hpp"

class Neon : public Victim
{

private:
    Neon();

public:
    Neon(std::string name);
    Neon(const Neon &src);
    virtual ~Neon();
    Neon &operator=(Neon const &rhs);

    virtual void    getPolymorphed() const;

};

std::ostream & operator<<( std::ostream &o, Neon const &rhs);

#endif