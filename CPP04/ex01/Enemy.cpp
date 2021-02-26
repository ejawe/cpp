#include "Enemy.hpp"

Enemy::Enemy()
{

}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{

}

Enemy::Enemy(const Enemy &src)
{
    *this = src;
    return;
}

Enemy &      Enemy::operator=(Enemy const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return *this;
}

Enemy::~Enemy()
{
    std::cout << "* Destructeur enemy *" << std::endl;
    return;
}

const std::string   Enemy::getType() const
{
    return this->_type;
}

int                 Enemy::getHP() const
{
    return this->_hp;
}

void    Enemy::takeDamage(int damage)
{
    if (damage < 0)
        return;
    _hp -= damage;
    if (_hp < 0)
        _hp = 0;
    std::cout << _type << " lost " << damage << " AP . Remaining hit points : " << _hp << std::endl;
    return;
}