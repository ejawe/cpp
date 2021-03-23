/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:45:48 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/22 17:06:32 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(int n) : _n(n)
{
	this->_tab.reserve(n);
	return;
}

Span::~Span()
{

}


Span::Span(Span const &src)
{
    *this = src;
    return;
}

Span &		Span::operator=(Span const &rhs)
{
	if ( this != &rhs )
	{
		this->_n = rhs._n;
		this->_tab = rhs._tab;
	}
	return *this;
}

void	Span::addNumber(int number)
{
	if (_tab.size() == _n)
		throw std::string("Le conteneur est rempli");
	_tab.push_back(number);
	return;
}

int		Span::shortestSpan()
{
	if (_tab.size() <= 1)
		throw std::string("Le conteneur ne contient pas assez d'éléments.");
	std::sort(_tab.begin(), _tab.end());
	int shortest = INT_MAX;
	size_t i = 0;
	while (i < _tab.size() - 1)
	{
		if (_tab[i + 1] - _tab[i] < shortest)
			shortest = _tab[i + 1] - _tab[i];
		i++;
	}
	return shortest;
}

int		Span::longestSpan()
{
	if (_tab.size() <= 1)
		throw std::string("Le conteneur ne contient pas assez d'éléments.");
	// Returns an iterator pointing to the element with the smallest value in the range 
	int min = *std::min_element(_tab.begin(), _tab.end());
	int max = *std::max_element(_tab.begin(), _tab.end());
	return max - min;
}

void	Span::addNumber(int start, int end)
{
	if (start > end)
		throw std::string("La rangée est incorrect.");
	int i = start;
	if (_tab.size() + (end - start) > _n)
		throw std::string("Le conteneur est rempli");
	while (i <= end)
	{
		_tab.push_back(i);
		i++;
	}
}