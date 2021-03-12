/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:46:07 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/12 10:46:15 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <stdlib.h>
# include <time.h>
# include "Base.hpp"

Base	*generate(void)
{
	srand(time(NULL));
	int nb = rand() % 3;
	if (nb == 0)
		return (new A);
	else if (nb == 1)
		return (new B);
	else
		return (new C);
	return (new A);
}

void identify_from_pointer(Base * p)
{
    A *a;
    B *b;
    C *c;

	if ((a = dynamic_cast<A*>(p)))
		std::cout << "A" << std::endl;
	else if ((b = dynamic_cast<B*>(p)))
		std::cout << "B" << std::endl;
	else if ((c = dynamic_cast<C*>(p)))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
    return ;
}

int		main(void)
{
	std::cout << "identify random class"<<std::endl;
	Base *base;
	base = generate();

	identify_from_pointer(base);
	identify_from_reference(*base);

	std::cout << "identify class A"<<std::endl;
	A a;
	identify_from_pointer(&a);
	identify_from_reference(a);

	std::cout << "identify class B"<<std::endl;
	B b;
	identify_from_pointer(&b);
	identify_from_reference(b);

	std::cout << "identify class C"<<std::endl;
	C c;
	identify_from_pointer(&c);
	identify_from_reference(c);

	delete base;
	return 0;
}