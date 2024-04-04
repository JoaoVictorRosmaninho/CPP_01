/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:00:52 by jv                #+#    #+#             */
/*   Updated: 2024/04/04 00:08:35 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include "contact.hpp"

# define MAX_CONTACTS 2


class Phonebook {
    public:
        Phonebook();
        ~Phonebook();
        
        void add_contacts();
        void search_contact();
        void display_list();
    private:
        unsigned char position;
        Contact contacts[MAX_CONTACTS];

        std::string format(std::string text);
};

#endif