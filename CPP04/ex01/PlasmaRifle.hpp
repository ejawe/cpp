/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:02:06 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:02:07 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

private:

public:
    PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &src);
    PlasmaRifle &operator=(const PlasmaRifle &rhs);
    virtual ~PlasmaRifle();

    virtual void attack() const;

};


#endif