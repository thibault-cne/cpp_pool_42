#include "header.hpp"
#include <string>

PhoneBook::PhoneBook(void) {
  ptr = 0;
  full = 0;
}

PhoneBook::~PhoneBook(void) {
  return;
}

void PhoneBook::format_and_print_line(std::string str) {
  std::cout << std::setw(10);
  if (str.length() > 10) {
    str.resize(9);
    str.resize(10, '.');
  }
  std::cout << str;
  std::cout << "|";
}

void PhoneBook::display(void) {
  int i;
  Contact contact;

  i = -1;

  std::cout << "|";
  format_and_print_line("index");
  format_and_print_line("first name");
  format_and_print_line("last name");
  format_and_print_line("nickname");
  std::cout << std::endl;

  while ((++i < 8 && full) || ((i < ptr) && !full)) {
    contact = contacts[i];
    std::cout << "|";
    format_and_print_line(std::to_string(i));
    format_and_print_line(contact.get_first_name());
    format_and_print_line(contact.get_last_name());
    format_and_print_line(contact.get_nickname());
    std::cout << std::endl;
  }
}

void PhoneBook::display(int index) {
  if (index < 0 || index > 7 || (!full && index >= ptr)) {
    std::cout << "You entered an invalid index" << std::endl;
    return;
  }

  Contact contact;

  contact = contacts[index]; 
  std::cout << "First name: " << contact.get_first_name() << std::endl;
  std::cout << "Last name: " << contact.get_last_name() << std::endl;
  std::cout << "Nickname: " << contact.get_nickname() << std::endl;
  std::cout << "Phone number: " << contact.get_phone_number() << std::endl;
  std::cout << "Darkest secret: " << contact.get_darkest_secret() << std::endl;
}

void PhoneBook::add_contact(t_info *info) {
  Contact contact;

  contact.set_first_name(info->first_name);
  contact.set_last_name(info->last_name);
  contact.set_nickame(info->nickname);
  contact.set_phone_number(info->phone_number);
  contact.set_darkest_secret(info->darkest_secret);
  
  contacts[ptr] = contact;

  if (ptr == 7)
    full = 1;
  
  
  ptr = (ptr + 1) % 8;
}

void PhoneBook::search(void) {
  std::string input;

  display();
  std::cout << "Enter an index to lookup: ";

  if (!std::getline(std::cin, input))
    return;

  if (input.length() > 1) {
    std::cout << "You entered an invalid index" << std::endl;
    return;
  }
  
  std::cout << "Displaying information on index " << input << "..." << std::endl;
  display(input[0] - 48);
}
