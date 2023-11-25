#include "Zombie.hpp"

int main(void) {
  Zombie *zombies;
  int i;

  zombies = zombieHorde(10, "Foo");
  i = -1;

  while (++i < 10)
    zombies[i].announce();
  
  delete [] zombies;

  return 0;
}
