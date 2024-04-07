/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:41:50 by jv                #+#    #+#             */
/*   Updated: 2024/04/04 22:16:14 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() {
    this->position = 0;
}

Phonebook::~Phonebook() {
    
}

void Phonebook::add_contacts() {
    static unsigned int position = 0;

    this->contacts[this->position % MAX_CONTACTS].initialize(this->position % MAX_CONTACTS);

    if (this->position < MAX_CONTACTS) this->position++;

    position++;
}

void Phonebook::display_list()  {
    std::cout << "------------- PHONBOOK CONTACTS -------------" << std::endl;
    
    for (short int i = 0; i < this->position; i++) {
        std::cout << "| " << std::setw(10) << this->contacts[i].index             << std::flush;
        std::cout << "| " << std::setw(10) << format(this->contacts[i].name)      << std::flush;
        std::cout << "| " << std::setw(10) << format(this->contacts[i].last_name) << std::flush;
        std::cout << "| " << std::setw(10) << format(this->contacts[i].nickname)  << "|" << std::flush;
        std::cout << std::endl;
    }

    show_contact_info(Input::read_contact_index());
}

void Phonebook::show_contact_info(short int index) {
    this->contacts[index].show();
}

std::string Phonebook::format(std::string text) {
    return text.length() > 10 ? text.substr(0,  9) + "." : text;
}