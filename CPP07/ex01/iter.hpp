/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:08:40 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/12 16:49:43 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

template <typename T>
void	display(T element)
{
	std::cout << element << std::endl;
	return;
}

template <typename T>
void	iter(T tab[], size_t length, void (*fct)(T const &))
{
	size_t i = 0;
	while (i < length)
	{
		fct(tab[i]);
		i++;
	}
	return;
}

#endif