#include "MechantEnemy.hpp"

MechantEnemy::MechantEnemy() : Enemy(100, "MechantEnemy")
{
    std::cout << "* bad bad bad *" << std::endl;
    return;
}


MechantEnemy::MechantEnemy(const MechantEnemy &src) : Enemy(src)
{
    *this = src;
    return;
}

MechantEnemy &      MechantEnemy::operator=(MechantEnemy const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return *this;
}

MechantEnemy::~MechantEnemy()
{
    std::cout << "* End of bad *" << std::endl;
    return;
}
