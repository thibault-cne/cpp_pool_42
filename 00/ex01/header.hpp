#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <iomanip>

struct _t_info {
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone_number;
  std::string darkest_secret;
};

typedef struct _t_info t_info;

#include "Contact.hpp"
#include "PhoneBook.hpp"

#endif // HEADER_HPP
