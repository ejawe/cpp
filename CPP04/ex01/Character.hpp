#ifndef CHARACTER_H
# define CHARACTER_H

#include <string>
#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{

private:
    Character();

protected:
    std::string _name;
    int         _ap;
    AWeapon*    _weapon;

public:
    Character(std::string const & name);
    Character(const Character &src);
    Character &operator=(const Character &rhs);
    ~Character();

    void    recoverAP();
    void    equip(AWeapon* weapon);
    void    attack(Enemy* &enemy);

    const std::string   getName() const;
    int                 getAP() const;
    AWeapon*            getWeapon() const;
};

std::ostream & operator<<( std::ostream &o, Character const &rhs);

#endif