#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string phone_number;
    public:
        std::string getName();
        std::string getLname();
        std::string getNickname();
        std::string getDark();
        std::string getPhone();
        void setName(std::string  n);
        void setLname(std::string  ln);
        void setNickname(std::string  nick);
        void setDark(std::string  d);
        void setPhone(std::string  p);
};

#endif