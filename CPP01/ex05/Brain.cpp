/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:16:06 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/09 16:34:42 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    // std::cout << "Conctructor Brain call" << std::endl;
}

Brain::~Brain()
{
    // std::cout << "Destructor Brain call" << std::endl;
}

std::string     Brain::identify() const
{
    // std::cout << "identify Brain" << std::endl;
    std::stringstream ss;
    ss << this;
    return ss.str();
}

