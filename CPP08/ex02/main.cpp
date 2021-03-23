/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:29:08 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/23 16:49:49 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::cout << "push elements 5 et 17" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top = " << mstack.top() << std::endl << std::endl;

	std::cout << "appel de pop()" << std::endl;
	mstack.pop();
	std::cout << "size = " << mstack.size() << std::endl << std::endl;

	std::cout << "push elements 3, 5, 737 et 0" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); 
	mstack.push(0);
	std::cout << "size = " << mstack.size() << std::endl << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Affichage mstack debut à fin" << std::endl << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	MutantStack<int>::iterator it2 = mstack.begin();
	MutantStack<int>::iterator ite2 = mstack.end();

	std::cout << std::endl;
	std::cout << "Affichage s debut à fin" << std::endl << std::endl;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	return 0;
}