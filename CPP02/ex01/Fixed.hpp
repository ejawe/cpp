/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 13:19:00 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/11 13:19:01 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{

public:
    Fixed();
    Fixed(int const n);
    Fixed(float const nf);
    Fixed(Fixed const &src);
    ~Fixed();

    Fixed &     operator=(Fixed const &rhs);

    int         getRawBits() const;
    void        setRawBits(int const raw);
    float       toFloat() const;
    int         toInt() const;

private:
    int _n;
    static const int _nb_bits = 8;
};

std::ostream &operator<<(std::ostream &o, const Fixed &i);

#endif