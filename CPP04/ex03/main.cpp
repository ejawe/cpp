/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:41:23 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 19:41:25 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* moi = new Character("moi");

	AMateria* tmp;
	AMateria* tmp2;

	std::cout << "---------tmp Materia" << std::endl;
	std::cout << "---------createMateria ice" << std::endl;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	std::cout << std::endl;

	std::cout << "---------tmp2 Materia" << std::endl;
	std::cout << "---------createMateria cure" << std::endl;
	tmp2 = src->createMateria("cure");
	moi->equip(tmp2);
	std::cout << std::endl;

	std::cout << "---------unequip index 6" << std::endl;
	moi->unequip(6);

	
	std::cout << std::endl;

	ICharacter* bob = new Character("bob");
	
	std::cout << "tmp xp = " << tmp->getXP() << std::endl;
	std::cout << "tmp2 xp = " << tmp->getXP() << std::endl;
	std::cout << "---------use" << std::endl;
	std::cout << "---------0" << std::endl;
	moi->use(0, *bob);
	std::cout << "---------1" << std::endl;
	moi->use(1, *bob);
	std::cout << "Material doesn't exist" << std::endl;
	std::cout << "---------2" << std::endl;
	moi->use(2, *bob);
	std::cout << "---------3" << std::endl;
	moi->use(3, *bob);
	std::cout << "---------4" << std::endl;
	moi->use(4, *bob);

	std::cout << std::endl;

	std::cout << "tmp xp = " << tmp->getXP() << std::endl;
	std::cout << "tmp2 xp = " << tmp2->getXP() << std::endl;
	std::cout << std::endl;

	std::cout << "---------unequip index 1" << std::endl;
	moi->unequip(1);
	moi->use(1, *bob);
	std::cout << "tmp xp = " << tmp->getXP() << std::endl;
	std::cout << std::endl;

	std::cout << "---------Deep Copy" << std::endl;
	ICharacter *luc = new Character(*static_cast<Character*>(moi));
	luc->use(0, *bob);
	luc->use(1, *bob);
	luc->use(3, *bob);

	
	delete bob;
	delete moi;
	delete src;
	delete luc;
	system("leaks a.out");
	return 0;
}
