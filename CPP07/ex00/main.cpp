/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:35:18 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/12 14:39:06 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "Awesome.hpp"

int	main(void)
{
	std::cout << "-----------Int test" << std::endl;
	float a = 9.4;
	float b = 3.5;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << "-----------Min"<< std::endl;
	std::cout << min(a, b) << std::endl;
	std::cout << "-----------Max"<< std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << "-----------Swap"<< std::endl;
	swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << "-----------Awesome class test" << std::endl;
	Awesome c(20);
	Awesome d(10);
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	std::cout << "-----------Min"<< std::endl;
	std::cout << min(c, d) << std::endl;

	std::cout << "-----------Max"<< std::endl;
	std::cout << max(c, d) << std::endl;
	std::cout << "-----------Swap"<< std::endl;
	swap(c, d);
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	std::cout << "-----------Char test" << std::endl;
	char e = 'e';
    char f = 'f';
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;

	std::cout << "-----------Min"<< std::endl;
	std::cout << min(e, f) << std::endl;

	std::cout << "-----------Max"<< std::endl;
	std::cout << max(e, f) << std::endl;
	std::cout << "-----------Swap"<< std::endl;
	swap(e, f);
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;

	// std::cout << "-----------Sujet test" << std::endl;
	// int a = 2;
	// int b = 3;
	// ::swap( a, b );
	// std::cout << "a = " << a << ", b = " << b << std::endl;
	// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	// std::string c = "chaine1";
	// std::string d = "chaine2";
	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}