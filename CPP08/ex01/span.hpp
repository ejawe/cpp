/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:45:58 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/21 21:45:59 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <algorithm> 
#include <climits>

class Span
{

private:
	unsigned int _n;
	std::vector<int> _tab;
	Span();

public:
	Span(int n);
	Span(Span const &src);
	~Span();

	Span &		operator=(Span const &rhs);

	void	addNumber(int number);
	void	addNumber(int start, int end);
	int		shortestSpan();
	int		longestSpan();
	
};

#endif