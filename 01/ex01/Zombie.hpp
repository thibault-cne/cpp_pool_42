#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie {
  private:
    std::string _name;

  public:
    Zombie();
    ~Zombie(void);

    void initialize(std::string name);
    void announce(void) const;
};

Zombie *zombieHorde(int N, std::string name);


#endif // __ZOMBIE_HPP__
