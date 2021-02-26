/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:02:28 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:02:29 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{

private:

public:
    RadScorpion();
    RadScorpion(const RadScorpion &src);
    RadScorpion &operator=(const RadScorpion &rhs);
    virtual ~RadScorpion();

};


#endif