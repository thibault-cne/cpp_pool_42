#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "header.hpp"

class Contact {
  private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
  public:
    Contact(void);
    ~Contact(void);

    // Getters
    std::string get_first_name(void);
    std::string get_last_name(void);
    std::string get_nickname(void);
    std::string get_phone_number(void);
    std::string get_darkest_secret(void);
    // Setters
    void set_first_name(std::string new_first_name);
    void set_last_name(std::string new_last_name);
    void set_nickame(std::string new_nickname);
    void set_phone_number(std::string new_phone_number);
    void set_darkest_secret(std::string new_darkest_secret);
};


#endif // CONTACT_HPP
