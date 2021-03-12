#include "Neon.hpp"

Neon::Neon() : Victim()
{

}

Neon::Neon(std::string name) : Victim(name)
{
    std::cout << "craoc craoc." << std::endl;
    return;
}

Neon::Neon(const Neon &src)
{
    *this = src;
    return;
}

Neon &      Neon::operator=(Neon const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_name = rhs._name;
    }
    return *this;
}

Neon::~Neon()
{
    std::cout << "End of forg..." << std::endl;
    return;
}

void            Neon::getPolymorphed() const
{
    std::cout << _name << " was just polymorphed into a forg!" << std::endl;
    return;
}

std::ostream & operator<<( std::ostream &o, Neon const &rhs)
{
    o << "I'm " << rhs.getName() << " and I like forgs!" << std::endl;
    return o;
}