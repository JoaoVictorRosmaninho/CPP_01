/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:00:52 by jv                #+#    #+#             */
/*   Updated: 2024/04/04 22:19:40 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include "contact.hpp"
# include "input.hpp"

# define MAX_CONTACTS 2


class Phonebook {
    public:
        Phonebook();
        ~Phonebook();
        
        void add_contacts();
        void search_contact();
        void display_list();
        void show_contact_info(short int index);
    private:
        short int position;
        Contact contacts[MAX_CONTACTS];

        std::string format(std::string text);
};

#endif