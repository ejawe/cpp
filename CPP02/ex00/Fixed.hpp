/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 13:20:23 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/11 13:20:24 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>


class Fixed
{

public:
    Fixed();
    Fixed(int const n);
    Fixed(Fixed const &src);
    ~Fixed();

    Fixed &     operator=(Fixed const &rhs);

    int         getRawBits(void) const;
    void        setRawBits(int const raw);


private:
    int _n;
    static const int _nb_bits = 8;
};

#endif