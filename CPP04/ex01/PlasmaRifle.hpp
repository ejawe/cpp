#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

private:

public:
    PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &src);
    PlasmaRifle &operator=(const PlasmaRifle &rhs);
    virtual ~PlasmaRifle();

    virtual void attack() const;

};


#endif