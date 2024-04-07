#ifndef INPUT_H
# define INPUT_H

#include <iostream>
#include <string>

class Input {
    public:
        std::string read_line_from_std();
        static std::string read_contact_info(std::string text);
        static short int read_contact_index();
    private:
        std::string input;
        bool valid_input();
};

#endif