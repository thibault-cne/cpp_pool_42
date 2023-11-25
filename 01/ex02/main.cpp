#include <iostream>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string &stringREF = str;
  std::string *stringPTR = &str;

  std::cout << "Str memory addr: " << &str << std::endl;
  std::cout << "Ref memory addr: " << &stringREF << std::endl;
  std::cout << "Ptr memory addr: " << stringPTR << std::endl;
  std::cout << std::endl;

  std::cout << "Str value: " << str << std::endl;
  std::cout << "Ref pointed value: " << stringREF << std::endl;
  std::cout << "Ptr pointed value: " << *stringPTR << std::endl;
  
  return 0;
}
