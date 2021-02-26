#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure &src)
{
    *this = src;
    return;
}

Cure & Cure::operator=(const Cure &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        AMateria::operator=(rhs);
    }
    return *this;
}

Cure::~Cure()
{

}

AMateria*   Cure::clone() const
{
    Cure *cure = new Cure(*this);
    return cure;
}

void    Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    return;
}