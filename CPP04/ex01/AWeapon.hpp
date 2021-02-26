#ifndef AWEAPON_H
# define AWEAPON_H

#include <string>
#include <iostream>

class AWeapon
{

private:
    AWeapon();

protected:
    std::string _name;
    int         _apcost;
    int         _damage;
    
public:
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(const AWeapon &src);
    AWeapon &operator=(const AWeapon &rhs);
    virtual ~AWeapon();

    const std::string   getName() const;
    int                 getAPCost() const;
    int                 getDamage() const;

    virtual void attack() const = 0;

};


#endif