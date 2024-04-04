#include "input.hpp"

std::string Input::read_line_from_std() {
    while (true) {
        std::cout << "> ";
        
        getline(std::cin, this->input, '\n');

        if (std::cin.eof())
            std::cin.clear();

        if (!this->input.empty() && valid_input())
            break;
        
        std::cin.clear();
        std::cout << "Please insert a valid input" << std::endl;
    }

    return this->input;
}

std::string Input::read_contact_info(std::string text) {
    std::string info  = "";
    bool        valid = false; 

    do {
        std::cout << text << std::flush;

        getline(std::cin, info, '\n');
        
        if (std::cin.good() && !info.empty()) {
            valid = true;
        }  
        else {
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }

    } while (!valid);

    return  info;
}

bool Input::valid_input() {
    return this->input == "ADD"    ||
           this->input == "SEARCH" ||
           this->input == "EXIT";
}