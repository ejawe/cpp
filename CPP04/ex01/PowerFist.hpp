/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:02:16 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:02:17 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_H
# define POWERFIRST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

private:

public:
    PowerFist();
    PowerFist(const PowerFist &src);
    PowerFist &operator=(const PowerFist &rhs);
    virtual ~PowerFist();

    virtual void attack() const;

};


#endif