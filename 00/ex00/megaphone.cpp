#include <algorithm>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
  }
  
  int i;
  std::string arg;

  i = 0;

  while (++i < argc) {
    arg = argv[i];
    std::transform(arg.begin(), arg.end(), arg.begin(), ::toupper);
    std::cout << arg;
  }

  std::cout << "\n";

  return 0;
}
