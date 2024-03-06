#include "Contact.hpp"

std::string Contact::getName()
{
    return (first_name);
}
std::string Contact::getLname()
{
    return (last_name);
}
std::string Contact::getNickname()
{
    return (nickname);
}
std::string Contact::getDark()
{
    return (darkest_secret);
}
std::string Contact::getPhone()
{
    return (phone_number);
}
void Contact::setName(std::string  n)
{
    this->first_name = n;
}
void Contact::setLname(std::string  ln)
{
    this->last_name = ln;
}
void Contact::setNickname(std::string  nick)
{
    this->nickname = nick;
}
void Contact::setDark(std::string  d)
{
    this->darkest_secret = d;
}

void Contact::setPhone(std::string  p)
{
    this->phone_number = p;
}