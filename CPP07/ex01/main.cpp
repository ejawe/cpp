/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:08:46 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/12 15:08:47 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Awesome.hpp"

int main(void)
{
	std::cout << "-----------Int test" << std::endl;
	int tab[] = {0, 1, 2, 3, 4, 5};
	iter(tab, 6, display);

	std::cout << "-----------Char test" << std::endl;
	char c[] = "bonjour";
	iter(c, 7, display);

	std::cout << "-----------float test" << std::endl;
	double tabf[] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5};
	iter(tabf, 6, display);

	std::cout << "-----------class Awesome test" << std::endl;
	{
		int tab[] = {0, 1, 2, 3, 4};
		Awesome tab2[5];

		iter(tab, 5, print);
		iter(tab2, 5, print);
	}
	return 0;
}