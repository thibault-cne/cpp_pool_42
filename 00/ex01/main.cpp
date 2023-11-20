#include "header.hpp"

int check_info(t_info *info) {
  if (info->first_name.empty() || info->last_name.empty() || info->nickname.empty()
    || info->darkest_secret.empty() || info->phone_number.empty()) {
    std::cout << "At least one field is empty, please make sure to fill all the fields" << std::endl; 
    return 0;
  }

  return 1;
}

int main(void) {
  PhoneBook phone_book;
  std::string command;
  t_info info;

  while (1) {
    std::cout << "~> ";
    if (!std::getline(std::cin, command)) {
      return 1;
    }

    if (command == "ADD") {
      std::cout << "First name: ";
      if (!std::getline(std::cin, info.first_name)) {
        return 1;
      }

      std::cout << "Last name: ";
      if (!std::getline(std::cin, info.last_name)) {
        return 1;
      }

      std::cout << "Nickname: ";
      if (!std::getline(std::cin, info.nickname)) {
        return 1;
      }

      std::cout << "Phone number: ";
      if (!std::getline(std::cin, info.phone_number)) {
        return 1;
      }

      std::cout << "Darkest secret: ";
      if (!std::getline(std::cin, info.darkest_secret)) {
        return 1;
      }

      if (check_info(&info)) {
        phone_book.add_contact(&info);
      }
    } else if (command == "SEARCH") {
      phone_book.search();
    } else if (command == "EXIT") {
      std::cout << "Exiting program...\n";
      break;
    }
  }

  return 0;
}
