/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 13:19:10 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/12 12:10:56 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _n(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int const n) : _n(n << _nb_bits)
{
    //on modifie le point fixe a n * 2^8
    std::cout << "Parametric Int construtor called" << std::endl;
    // std::cout << "int to fix : _n : " << _n << std::endl;
    return;
}


Fixed::Fixed(float const nf) : _n(roundf(nf * (1 << _nb_bits)))
{
    //on modifie le point fixe a n * 2^8, et arrondir à l'entier le plus proche
    std::cout << "Parametric Float construtor called" << std::endl;
    // std::cout << "float to fix : _n : " << _n << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy construtor called" << std::endl;
    *this = src;
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
    this->_n = rhs.getRawBits();

    return *this;
}

float   Fixed::toFloat() const
{
    // la valeur d'entrée divisé par (2^fractional_bits), en mettant le résultat en double
    float nb = (float)_n /(1 << _nb_bits);
    // std::cout << "nb to float : " << nb << std::endl;
    return nb;
}

int     Fixed::toInt() const
{
    return _n >> _nb_bits;
}

int     Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_n;
}

void    Fixed::setRawBits(int const raw)
{
    this->_n = raw;
    return;
}

std::ostream &operator<<(std::ostream &o, const Fixed &i)
{
    //representation du nombre a point fixe
    return o << i.toFloat();
}