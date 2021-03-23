/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:46:25 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/21 21:46:26 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

// foncteur 
class Remplir
{

public:
    Remplir(int i) :_valeur(i) {}

    int operator()()
    {
        ++_valeur;
        return _valeur;
    }

private:
    int _valeur;
};


template <typename T>
int		easyfind(T &container, int nb)
{
	typename T::iterator it = find(container.begin(), container.end(), nb);
	if(it == container.end())
		throw std::string("Ce nombre n'existe pas.");
	else
		return (*it);
}
#endif