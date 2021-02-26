/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:16:18 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/07 17:16:19 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
    // std::cout << "Conctructor Human call" << std::endl;
}
Human::~Human()
{
    // std::cout << "Destructor Human call" << std::endl;
}

Brain const     &Human::getBrain() const
{
    return this->_brain;
}

std::string     Human::identify() const
{
    // std::cout << "identify Human" << std::endl;
    return this->_brain.identify();
}