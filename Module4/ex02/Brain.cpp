#include "Brain.hpp"

Brain::Brain(const Brain &B)
{

    std::cout << "copy constructor brain" << std::endl;
    if (this != &B)
        *this = B;
}
Brain::Brain()
{
    std::cout << "creating big brain" << std::endl;
}

Brain::~Brain()
{
    std::cout << "destroing Brain" << std::endl;
}

Brain   &Brain::operator=(const Brain &B)
{
    if (this != &B)
    {
        for (int i = 0; i <= 100; i++)
        {
            this->ideas[i] = B.ideas[i];
        }
    }
    return (*this);
}