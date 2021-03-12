/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:01:55 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/02 12:45:54 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PowerArm.hpp"
#include "MechantEnemy.hpp"

int main()
{
    Character* moi = new Character("moi");
    std::cout << *moi;

    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* pa = new PowerArm();

    std::cout << "-------------" << std::endl;
    moi->equip(pa);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    std::cout << "----------------------------------------------------------------Test changement arme" << std::endl;
    moi->equip(pf);
    moi->attack(b);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    moi->equip(pr);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    std::cout << "----------------------------------------------------------------Test epuisement HP enemy" << std::endl;
    moi->attack(b);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    moi->attack(b);
    std::cout << *moi;

    std::cout << "-------------" << std::endl;
    std::cout << "----------------------------------------------------------------Test attack sans enemy" << std::endl;
    moi->attack(b);
    std::cout << "-------------" << std::endl;

    std::cout << "----------------------------------------------------------------Nouveau enemy" << std::endl;
    Enemy* c = new SuperMutant();
    std::cout << "----------------------------------------------------------------Test epuisement AP Character" << std::endl;
    moi->attack(c);
    moi->attack(c);
    moi->attack(c);
    moi->attack(c);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    moi->attack(c);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    std::cout << "----------------------------------------------------------------Test recovery Character" << std::endl;
    moi->recoverAP();
    std::cout << *moi;
    moi->recoverAP();
    std::cout << *moi;
    moi->recoverAP();
    std::cout << *moi;
    moi->recoverAP();
    std::cout << *moi;
    moi->recoverAP();
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    std::cout << "----------------------------------------------------------------Test attack après recovery Character" << std::endl;
    moi->attack(c);
    std::cout << *moi;
    std::cout << "----------------------------------------------------------------Test Nouveau enemy Mechant" << std::endl;
    Enemy* d = new MechantEnemy();
    moi->attack(d);
    std::cout << *moi;

    std::cout << "----------------------------------------------------------------Delete" << std::endl;
    delete moi;
    delete pr;
    delete pf;
    delete pa;
    delete d;
    delete c;
    system("leaks a.out");
    return (0);
}