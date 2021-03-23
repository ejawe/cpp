/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:46:32 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/21 21:46:33 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::vector<int> tab1(20, 0);
	Remplir f(0);

	generate(tab1.begin(), tab1.end(), f);
	try
	{
		int result = easyfind(tab1, 5);
		std::cout << result << std::endl;
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	try
	{
		int result = easyfind(tab1, 21);
		std::cout << result << std::endl;
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}


	std::deque<int> tab2(4, 0);
	generate(tab2.begin(), tab2.end(), f);
	try
	{
		int result = easyfind(tab2, 5);
		std::cout << result << std::endl;
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	try
	{
		int result = easyfind(tab2, 3);
		std::cout << result << std::endl;
	}
	catch(std::string const &errorMessage)
	{
		std::cerr << errorMessage << std::endl;
	}
	return 0;
}