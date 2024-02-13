#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "I love using cout for finding glitches, is very good" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I will always use valgrind is my favorite debbugger <3" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "valgrind is really dangerous i need to be carefull" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "SEGFAULT now i understand the problem, damn" << std::endl;
}

void    Harl::complain(std::string harl)
{
    int level = -1;
    std::string problem[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (problem[i] == harl)
        {
            level = i;
            break ;
        }
    }
    void (Harl::*select_case[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    if (level >= 0 && level < 4)
        (this->*select_case[level])();
}