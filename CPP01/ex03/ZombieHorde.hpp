/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:05:45 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/06 16:16:38 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include <string>
#include "Zombie.hpp"

class ZombieHorde
{

private:

    Zombie *_zombie;
    int _n;

public:

    ZombieHorde(int n);
    ~ZombieHorde();
    void    announce() const;
    
};

#endif