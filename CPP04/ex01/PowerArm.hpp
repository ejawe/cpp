/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerArm.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:09:27 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/02 12:09:29 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERARM_H
# define POWERARM_H

#include "AWeapon.hpp"

class PowerArm : public AWeapon
{

private:

public:
    PowerArm();
    PowerArm(const PowerArm &src);
    PowerArm &operator=(const PowerArm &rhs);
    virtual ~PowerArm();

    virtual void attack() const;

};


#endif