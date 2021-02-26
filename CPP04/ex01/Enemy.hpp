#ifndef ENEMY_H
# define ENEMY_H

#include <string>
#include <iostream>

class Enemy
{

private:
    Enemy();

protected:
    int         _hp;
    std::string _type;

public:
    Enemy(int hp, std::string const & type);
    Enemy(const Enemy &src);
    Enemy &operator=(const Enemy &rhs);
    virtual ~Enemy();

    const std::string   getType() const;
    int                 getHP() const;

    virtual     void takeDamage(int damage);

};


#endif