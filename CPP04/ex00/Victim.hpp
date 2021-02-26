#ifndef VICTIM_H
# define VICTIM_H

#include <string>
#include <iostream>

class Victim
{

protected:
    std::string _name;
    Victim();

public:
    Victim(std::string name);
    Victim(const Victim &src);
    virtual ~Victim();
    Victim &operator=(Victim const &rhs);

    const std::string   getName(void) const;
    virtual void        getPolymorphed() const;

};

std::ostream & operator<<( std::ostream &o, Victim const &rhs); //peut s'introduire par tout moyen ??

#endif