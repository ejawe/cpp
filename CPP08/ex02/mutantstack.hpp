/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 20:09:06 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/22 18:20:25 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack> // LIFO
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{

private:

public:

	MutantStack() : std::stack<T>() {};
	virtual ~MutantStack() {};
	MutantStack(MutantStack const &src) : std::stack<T>(src) {};
	MutantStack & operator=(MutantStack const &rhs)
	{
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	// pour récupérer member type "iterator" de deque car stack utilise deque
	// ou typedef typename std::deque<T>::iterator iterator; 

	iterator 	begin() { return this->c.begin(); };
	// c (protected member of stack) = conteneur sous jacent
	iterator 	end() { return this->c.end(); };
};


#endif