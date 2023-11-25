#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie {
  private:
    std::string _name;

  public:
    Zombie(std::string name);
    ~Zombie(void);

    void announce(void) const;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);


#endif // __ZOMBIE_HPP__
