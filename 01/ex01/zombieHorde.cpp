#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  Zombie *zombies = new Zombie[N]; 
  int i;

  i = -1;

  while (++i < N)    
    zombies[i].initialize(name);
  
  return zombies;
}
