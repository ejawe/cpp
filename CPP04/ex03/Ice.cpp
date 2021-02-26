#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice &src)
{
    *this = src;
    return;
}

Ice & Ice::operator=(const Ice &rhs)
{
    if(this != &rhs)
    {
        AMateria::operator=(rhs);
    }
    return *this;
}

Ice::~Ice()
{

}

AMateria*   Ice::clone() const
{
    Ice *ice = new Ice(*this);
    return ice;
}

void    Ice::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return;
}