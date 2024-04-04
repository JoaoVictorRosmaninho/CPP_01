#include "contact.hpp"
#include "phonebook.hpp"
#include "input.hpp"


int main(void) {
    Input input;
    std::string entry;
    Phonebook pb;

    while ((entry = input.read_line_from_std()) != "EXIT") {
        if (entry == "ADD") {
            pb.add_contacts();
        } else if (entry == "SEARCH") {
            pb.display_list();
        }
    }
}