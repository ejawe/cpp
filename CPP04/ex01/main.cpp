#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"

int main()
{
    Character* moi = new Character("moi");
    std::cout << *moi;

    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    std::cout << "-------------" << std::endl;
    moi->equip(pr);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    moi->equip(pf);
    moi->attack(b);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    moi->equip(pr);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    moi->attack(b);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    moi->attack(b);
    std::cout << *moi;

    std::cout << "-------------" << std::endl;
    moi->attack(b);
    std::cout << "-------------" << std::endl;

    Enemy* c = new SuperMutant();

    moi->attack(c);
    moi->attack(c);
    moi->attack(c);
    moi->attack(c);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
    moi->attack(c);
    std::cout << *moi;
    std::cout << "-------------" << std::endl;
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
    moi->attack(c);
    std::cout << *moi;
    delete moi;
    delete pr;
    delete pf;
    return (0);
}