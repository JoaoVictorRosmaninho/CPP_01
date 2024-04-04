/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:53:13 by jv                #+#    #+#             */
/*   Updated: 2024/04/03 23:03:53 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"


Contact::Contact() {
    
}

Contact::~Contact() {
    
}

std::string Contact::to_string() {
    std::string representation = "";

    representation += "{name: ";
    representation += this->name;
    representation += ", last_name: ";
    representation += this->last_name;
    representation += "}";


    return representation;
}

void Contact::initialize(unsigned char index) {
    this->index          = index;
    this->name           = Input::read_contact_info("Please enter your first name: ");
    this->last_name      = Input::read_contact_info("Please enter your last name: ");
    this->nickname       = Input::read_contact_info("Please enter your nickname: ");
    this->phone_number   = Input::read_contact_info("Please enter your phone number: ");
    this->darkest_secret = Input::read_contact_info("Please enter your darkest secret: ");
}

void Contact::display() {
        
}
