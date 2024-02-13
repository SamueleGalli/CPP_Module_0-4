#include "PhoneBook.hpp"

void    adding_contact(PhoneBook &phone, int i)
{
    if (i > 7)
    {
        i = 7;
        phone.contact[i].first_name = "";
        phone.contact[i].last_name = "";
        phone.contact[i].nickname = "";
        phone.contact[i].phone_number = "";
        phone.contact[i].darkest_secret = "";
    }
    std::cout <<"insert your first name =";
    std::getline(std::cin, phone.contact[i].first_name);
    std::cout <<"insert your last name =";
    std::getline(std::cin, phone.contact[i].last_name);
    std::cout <<"insert your favorite nickname =";
    std::getline(std::cin, phone.contact[i].nickname);
    std::cout <<"insert your phone number =";
    std::getline(std::cin, phone.contact[i].phone_number);
    std::cout <<"insert your little dark secret =";
    std::getline(std::cin, phone.contact[i].darkest_secret);
}

void    resizing(std::string &str, int i)
{
    if (str.length() > 10)
    {
        str.resize(9);
        str.append(".");
        std::cout << str;
    }
    else
        std::cout << str;
    if (i == 0)
        std::cout << " | " ;
}

void    resize_search(PhoneBook &phone, int i)
{
    std::cout << i + 1 << ") ";
    resizing(phone.contact[i].first_name, 0);
    resizing(phone.contact[i].last_name, 0);
    resizing(phone.contact[i].nickname, 0);
    resizing(phone.contact[i].phone_number, 1);
    std::cout << std::endl;
}

void    searching_contact(PhoneBook &phone, int i2)
{
    if (i2 <= 0)
    {
        std::cout << "no contact" << std::endl;
        return ;
    }
    int i = 0;
    if (i2 > 7)
        i2 = 7;
    while (i < i2)
    {
        resize_search(phone, i);
        i++;
    }
    if (i == 7)
        resize_search(phone, i);
    std::string input;
    std::cout << "insert number contact :";
    std::cin >> input;
    system("clear");
    if (std::isdigit(input[0]) != 0)
    {
        int num = std::stoi(input);
        if (num >= 1 && num - 1 <= i2)
        {
            i = 0;
            while (i < num)
                i++;
            num--;
            std::cout << "FIRST_NAME = " << phone.contact[num].first_name << std::endl;
            std::cout << "LAST_NAME =" << phone.contact[num].last_name << std::endl;
            std::cout << "NICKNAME =" << phone.contact[num].nickname << std::endl;
            std::cout << "PHONE_NUMBER =" << phone.contact[num].phone_number << std::endl;
            std::cout << "SECRET =" << phone.contact[num].darkest_secret << std::endl;
        }
        else
            std::cout << "invalid number :" << input << std::endl;
    }
    else
        std::cout << "invalid number :" << input << std::endl;
}

void    exiting(PhoneBook phone)
{
    std::system("clear");
    puts("closing phonebook");
}

int main()
{
    int i = 0;
    PhoneBook   phone;
    std::string input;

    while (1)
    {
        puts("enter ADD,");
        puts("enter SEARCH,");
        puts("or enter EXIT");
        std::cout << "insert COMMAND: ";
        std::cin >> input;
        std::cin.ignore();
        std::cout << std::endl;
        if (input == "ADD")
        {
            std::cout << std::endl;
            system("clear");
            adding_contact(phone, i);
            i++;
        }
        else if (input == "SEARCH")
        {
            std::cout << std::endl;
            system("clear");
            searching_contact(phone, i);
        }
        else if (input == "EXIT")
        {
            exiting(phone);
            return (0);
        }
        else
        {
            std::cout << std::endl;
            system("clear");
            std::cout << "wrong command :" << input << std::endl;
        }
        input = "";
    }
}