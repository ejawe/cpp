/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:48:16 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/12 16:48:17 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{

private:
	unsigned int _n;
	T *_tab;

public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(Array const &src);
	Array &		operator=(Array const &rhs);

	T &			operator[](unsigned int const id);

	unsigned int size(void) const;

	class LimitsException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

template <typename T>
std::ostream & operator<<( std::ostream &o, Array<T> &rhs);

#endif