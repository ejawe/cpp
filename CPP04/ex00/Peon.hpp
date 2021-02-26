#ifndef PEON_H
# define PEON_H

#include "Victim.hpp"

class Peon : public Victim
{

private:
    Peon();

public:
    Peon(std::string name);
    Peon(const Peon &src);
    virtual ~Peon();
    Peon &operator=(Peon const &rhs);

    virtual void    getPolymorphed() const;

};

std::ostream & operator<<( std::ostream &o, Peon const &rhs);

#endif