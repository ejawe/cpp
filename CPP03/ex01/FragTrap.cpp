#include "FragTrap.hpp"

FragTrap::FragTrap() : 
_hitPoints(100),
_maxHitPoints(100),
_energiePoints(100),
_maxEnergyPoints(100),
_level(1),
_name("New player"),
_meleeAttackDamage(30),
_rangedAttackDamage(20),
_armorDamageReduction(5)
{
    std::cout << "<Chargement du jeu FragTrap>" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name) : 
_hitPoints(100),
_maxHitPoints(100),
_energiePoints(100),
_maxEnergyPoints(100),
_level(1),
_name(name),
_meleeAttackDamage(30),
_rangedAttackDamage(20),
_armorDamageReduction(5)
{
    std::cout << "<Chargement du jeu FragTrap>" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const &src)
{
    std::cout << "<Nouveau joueur FragTrap: chargement du jeu>" << std::endl;
    *this = src;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "<Fin du jeu FragTrap>" << std::endl;
    return;
}

FragTrap &     FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_hitPoints = rhs._hitPoints;
        this->_maxHitPoints = rhs._maxHitPoints;
        this->_energiePoints = rhs._energiePoints;
        this->_maxEnergyPoints = rhs._maxEnergyPoints;
        this->_level = rhs._level;
        this->_name = rhs._name;
        this->_meleeAttackDamage = rhs._meleeAttackDamage;
        this->_rangedAttackDamage = rhs._rangedAttackDamage;
        this->_armorDamageReduction = rhs._armorDamageReduction;
    }
    return *this;
}

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP [" << _name << "] attaque [" <<  target << "] à distance , causant [" << _rangedAttackDamage << "] points de dégâts." << std::endl;
    return;
}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP [" << _name << "] attaque [" <<  target << "] à distance , causant [" << _meleeAttackDamage << "] points de dégâts." << std::endl;
    return;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    int newScore = _hitPoints - (amount - _armorDamageReduction);
    if (newScore < 0)
        _hitPoints = 0;
    else
        _hitPoints = newScore;
    std::cout << "FR4G-TP [" << _name << "] se protège avec l'armure : réduction dégâts de [" << _armorDamageReduction << " points]" << std::endl;
    std::cout << "FR4G-TP [" << _name << "] pert [" << (amount - _armorDamageReduction) << "] points de dégâts." << std::endl;
    std::cout << "Nouveau score : [" << _hitPoints << "]" << std::endl;
    return;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    _energiePoints += amount;
    if (_hitPoints > _maxHitPoints)
        _hitPoints = _maxHitPoints;
    if (_energiePoints > _maxEnergyPoints)
        _energiePoints = _maxEnergyPoints;
    std::cout << "FR4G-TP [" << _name << "] gagne [" << amount << "] points de dégâts : total = [" << _hitPoints << "]" << std::endl;
    std::cout << "FR4G-TP [" << _name << "] gagne [" << amount << "] points d'énergie : total = [" << _energiePoints << "]" << std::endl;
    return;
}

std::string getRandomName()
{
    std::string randomAttack;
    std::string	tabAttack [] = {"Boule de feu", "Lancé de champignon", "Laser trachant", "Coup de poing", "Tourbillon fatal"};
    randomAttack = tabAttack[rand() % 5];
    return randomAttack;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (_energiePoints < 25)
    {
        std::cout << "FR4G-TP ["<< _name << "] n'a pas assez d'énergie : Attaque imposible." << std::endl;
        return;
    }
    int newScore = _energiePoints - 25;
    if (newScore < 0)
        _energiePoints = 0;
    else
        _energiePoints = newScore;
    std::cout << "FR4G-TP [" << _name << "] attaque [" <<  target << "] à distance , en mode [" << getRandomName() << "]" << std::endl;
    return;
}