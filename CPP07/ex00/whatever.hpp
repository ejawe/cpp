/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:35:32 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/12 14:35:34 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T temp(a);
	a = b;
	b = temp;
	return;
}

template <typename T>
T		&min(T &a, T &b)
{
	if (a < b)
		return a;
	else if (a == b)
		return b;
	else
		return b;
}

template <typename T>
T		&max(T &a, T &b)
{
	if (a > b)
		return a;
	else if (a == b)
		return b;
	else
		return b;
}

#endif