/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:01:50 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:01:51 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

#include <string>
#include <iostream>

class Enemy
{

private:
    Enemy();

protected:
    int         _hp;
    std::string _type;

public:
    Enemy(int hp, std::string const & type);
    Enemy(const Enemy &src);
    Enemy &operator=(const Enemy &rhs);
    virtual ~Enemy();

    const std::string   getType() const;
    int                 getHP() const;

    virtual     void takeDamage(int damage);

};


#endif