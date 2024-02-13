#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <cstdio>
#include <iostream>
#include <string>
#include "Contact.hpp"
#include <cstdlib>

class PhoneBook
{
    public:
        PhoneBook()
        {
        };
        ~PhoneBook()
        {

        };
        Contact contact[8];
    private:
};

#endif