#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{

private:

public:
    SuperMutant();
    SuperMutant(const SuperMutant &src);
    SuperMutant &operator=(const SuperMutant &rhs);
    virtual ~SuperMutant();

    virtual     void takeDamage(int damage);
};


#endif