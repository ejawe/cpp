/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:03:31 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:03:33 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

#include <string>
#include <iostream>

class Victim
{

protected:
    std::string _name;
    Victim();

public:
    Victim(std::string name);
    Victim(const Victim &src);
    virtual ~Victim();
    Victim &operator=(Victim const &rhs);

    const std::string   getName(void) const;
    virtual void        getPolymorphed() const;

};

std::ostream & operator<<( std::ostream &o, Victim const &rhs); //peut s'introduire par tout moyen ??

#endif