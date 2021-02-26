/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:37:10 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:37:11 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP
# define NINJA_TRAP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{

private:

public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const &src);
    ~NinjaTrap();

    NinjaTrap &  operator=(NinjaTrap const &rhs);

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);

    void    ninjaShoeBox(ClapTrap &target);
    void    ninjaShoeBox(FragTrap &target);
    void    ninjaShoeBox(ScavTrap &target);
    void    ninjaShoeBox(NinjaTrap &target);
};


#endif