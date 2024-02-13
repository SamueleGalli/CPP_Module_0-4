#include <string>
#include <iostream>

int main(void)
{
    std::string test_string = "HI THIS IS BRAIN";
    std::string* stringPTR = &test_string;
    std::string& stringREF = test_string;

    std::cout << "memory address..." << std::endl;
    std::cout << &test_string << std::endl;
    std::cout << &stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "value of variable..." << std::endl;
    std::cout << test_string << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}