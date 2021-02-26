#ifndef RADSCORPION_H
# define RADSCORPION_H

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{

private:

public:
    RadScorpion();
    RadScorpion(const RadScorpion &src);
    RadScorpion &operator=(const RadScorpion &rhs);
    virtual ~RadScorpion();

};


#endif