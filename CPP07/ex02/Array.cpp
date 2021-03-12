/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:48:09 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/12 16:48:10 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _n(0), _tab(NULL)
{

}

template <typename T>
Array<T>::Array(unsigned int n) : _n(n)
{
	_tab = new T[_n];
	return;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _tab;
}

template <typename T>
Array<T>::Array(Array<T> const &src)
{
    *this = src;
    return;
}

template <typename T>
Array<T> &		Array<T>::Array::operator=(Array<T> const &rhs)
{
    if(this != &rhs)
    {
        this->_n = rhs._n;
		this->_tab = new T[_n];
		size_t i = 0;
		while (i < _n)
		{
			this->_tab[i] = rhs._tab[i];
			i++;
		}
    }
    return *this;
}

template <typename T>
T &			Array<T>::operator[](unsigned int const id)
{
	if (!this->_tab || id >= this->_n)
		throw Array<T>::LimitsException();
	else
		return _tab[id];
}

template <typename T>
const char* Array<T>::LimitsException::what() const throw()
{
	return "This element is out of the limits";
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return this->_n;
}

template <typename T>
std::ostream & operator<<( std::ostream &o, Array<T> &rhs)
{
	size_t i = 0;

	while (i < rhs.size())
	{
		o << rhs[i] << ", ";
		i++;
	}
    return o;
}