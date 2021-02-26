#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}


PlasmaRifle::PlasmaRifle(const PlasmaRifle &src) : AWeapon(src) // argument required
{
    *this = src;
    return;
}

PlasmaRifle &      PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_name = rhs._name;
        this->_apcost = rhs._apcost;
        this->_damage = rhs._damage;
    }
    return *this;
}

PlasmaRifle::~PlasmaRifle()
{

}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return;
}
