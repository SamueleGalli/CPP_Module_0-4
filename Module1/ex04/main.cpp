#include <iostream>
#include <string>
#include <fstream>
//trovo la prima occorrenza di line in s1 salvo la posizione vedo se ce senno mi fermo
//cancello la stringa alla posizone
//ci metto quella nuova e aggiorno la posizone dopo l'insermento

void replace_line(std::ofstream &fileout, std::string line, size_t pos , std::string s1, std::string s2)
{
    pos = line.find(s1, pos);
    while (pos != std::string::npos)
    {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
        pos = line.find(s1, pos);
    }
    fileout << line << std::endl;
}

void copy_file(std::ofstream &fileout, std::ifstream &filein, const std::string s1, const std::string s2)
{
    std::string line;
    while (std::getline(filein, line))
        replace_line(fileout, line, 0, s1, s2);
}

int main()
{
    std::string s1, s2;

    std::string filename;
    std::cout << "select filename : ";
    std::cin >> filename;
    std::ifstream filein(filename.c_str());
    if (filein.is_open() == 0)
    {
        std::cout << filename << " is invalid" << std::endl;
        return (1);
    }
    std::cout << "string to find : ";
    std::cin >> s1;
    std::cout << std::endl;
    std::cout << " string to replace : ";
    std::cin >> s2;
    std::cout << std::endl;
    std::string out = filename + ".replace";
    std::ofstream fileout(out.c_str());
    copy_file(fileout, filein, s1, s2);
}