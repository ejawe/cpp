/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:15:15 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/09 16:06:44 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheHeap()
{
    Pony *ponyHeap = new Pony("Heap", "Harry", "blue", "carote");

    ponyHeap->printPony();

    delete ponyHeap;
    
    return;
}

void    ponyOnTheStack()
{
    Pony ponyStack("Stack", "Paulo", "pink", "garlic");

    ponyStack.printPony();

    return;
}

int main(void)
{
    ponyOnTheStack();
    std::cout<< " " << std::endl;
    ponyOnTheHeap();
    std::cout<< " " << std::endl;
    ponyOnTheStack();
    std::cout<< " " << std::endl;
    ponyOnTheHeap();

    system("leaks pony");
    return (0);
}