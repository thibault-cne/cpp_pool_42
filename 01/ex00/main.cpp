#include "Zombie.hpp"

int main(void) {
  Zombie *zombie; 

  zombie = newZombie("Foo");
  zombie->announce();

  randomChump("Bar");

  delete zombie;

  return 0;
}
