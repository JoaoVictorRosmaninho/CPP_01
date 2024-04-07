/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:20:41 by jv                #+#    #+#             */
/*   Updated: 2024/04/04 22:39:20 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input.hpp"
#include "phonebook.hpp"

std::string Input::read_line_from_std() {
    while (true) {
        std::cout << "> ";
        
        std::cin >> this->input;

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

        std::cin >> info;
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

short int Input::read_contact_index() {
    short int index = -1;

    while(true) {
        std::cout << "Insert the contact index: " << std::flush;
        std::cin  >> index;

        if (index >= 0 && index <= MAX_CONTACTS)
            return index;
        std::cin.clear();
        std::cout << "Index out of range, please re-enter" << std::endl;
    }
    return (index);
}

bool Input::valid_input() {
    return this->input == "ADD"    ||
           this->input == "SEARCH" ||
           this->input == "EXIT";
}