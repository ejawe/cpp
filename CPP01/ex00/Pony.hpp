/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:15:30 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/04 23:29:46 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
#include <iostream>
#include <string>

class Pony
{

private:

    std::string _allocation;
    std::string _name;
    std::string _color;
    std::string _favoriteMeal;

public:

    Pony(std::string alloc_type, std::string name, std::string color, std::string favoriteMeal);
    ~Pony(void);
    void    printPony(void) const;

};

#endif
