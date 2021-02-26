/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:44:33 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/23 13:44:34 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"


int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i) 
    {
        ISpaceMarine* cur = vlc->getUnit(i); 
        cur->battleCry(); 
        cur->rangedAttack(); 
        cur->meleeAttack();
    }
	std::cout << "cout = " << vlc->getCount() << std::endl;
	std::cout << "------- Push NULL -------" << std::endl;
	vlc->push(NULL);
	std::cout << "cout = " << vlc->getCount() << std::endl;
	std::cout << "------- Nouveau marine -------" << std::endl;
	ISpaceMarine* fred = new AssaultTerminator;
	vlc->push(fred);
	std::cout << "cout = " << vlc->getCount() << std::endl;
	std::cout << "------- Delete squad -------" << std::endl;
    delete vlc;

	std::cout << std::endl;
	std::cout << "------- Nouveaux marines -------" << std::endl;
	ISpaceMarine* luc = new TacticalMarine;
    ISpaceMarine* laure = new AssaultTerminator;
    ISquad* vlc1 = new Squad;
    vlc1->push(luc);
    vlc1->push(laure);
	std::cout << "cout vlc1 = " << vlc1->getCount() << std::endl;
	std::cout << "------- Assignation par copie vlc2 = vlc1-------" << std::endl;
	ISquad* vlc2 = new Squad(*static_cast<Squad*> (vlc1));
	std::cout << std::endl;
	for (int i = 0; i < vlc2->getCount(); ++i) 
    {
        ISpaceMarine* cur = vlc2->getUnit(i); 
        cur->battleCry(); 
        cur->rangedAttack(); 
        cur->meleeAttack();
    }
	std::cout << "cout vlc2 = " << vlc2->getCount() << std::endl;
	std::cout << std::endl;
	std::cout << "------- Nouveau marine lili -------" << std::endl;
	ISpaceMarine* lili = new TacticalMarine;
	std::cout << "------- Push nouveau marine dans vlc2 -------" << std::endl;
	vlc2->push(lili);
	std::cout << "cout vlc2 = " << vlc2->getCount() << std::endl;
	std::cout << "cout vlc1 = " << vlc1->getCount() << std::endl;

	std::cout << "------- Delete squad 1 et 2 -------" << std::endl;
	delete vlc1;
	delete vlc2;
    return 0; 
}
