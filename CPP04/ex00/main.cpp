#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"


int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Victim *james = new Peon("James");

    std::cout << "-------------" << std::endl;
    std::cout << robert << jim << joe << *james;
    std::cout << "-------------" << std::endl;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(*james);

    delete james;
    // system("leaks a.out");
    return 0;
}