#ifndef POWERFIRST_H
# define POWERFIRST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

private:

public:
    PowerFist();
    PowerFist(const PowerFist &src);
    PowerFist &operator=(const PowerFist &rhs);
    virtual ~PowerFist();

    virtual void attack() const;

};


#endif