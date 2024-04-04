#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include "input.hpp"

class Contact {
    public:
        unsigned int index;
        std::string  name;
        std::string  last_name;
        std::string  nickname;
        std::string  phone_number;
        std::string  darkest_secret;
        
        Contact();
        ~Contact();

        void initialize(unsigned char index);
        void display();
        std::string to_string();

};

#endif