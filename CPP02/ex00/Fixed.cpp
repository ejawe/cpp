/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 13:20:39 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/11 13:20:40 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _n(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy construtor called" << std::endl;
    *this = src;
    return;
}

Fixed::Fixed(int const n) : _n(n)
{
    std::cout << "Parametric construtor called" << std::endl;
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed &     Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;

    if (this != &rhs)
        this->_n = rhs.getRawBits();

    return *this;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

void    Fixed::setRawBits(int const raw)
{
    this->_n = raw;
    return;
}