#ifndef BRAIN_CPP
#define BRAIN_CPP
#include <iostream>
#include <string>

class Brain
{
    public:
        std::string *ideas[100];
        Brain();
        ~Brain();
};

#endif