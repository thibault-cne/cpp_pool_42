#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "header.hpp"

class PhoneBook {
  private:
    int ptr;
    int full;
    Contact contacts[8];  
  public:
    PhoneBook(void);
    ~PhoneBook(void);

    void format_and_print_line(std::string str);
    void add_contact(t_info *info);
    void display(void);
    void display(int index);
    void search(void);
};

#endif // PHONE_BOOK_HPP
