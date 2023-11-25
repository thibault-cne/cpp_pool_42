#include "Zombie.hpp"

Zombie::Zombie() {
  return;
}

Zombie::~Zombie(void) {
  std::cout << _name << std::endl;
  return;
}

void Zombie::initialize(std::string name) {
  _name = name;
  return;
}

void Zombie::announce(void) const {
  std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
  return;
}


