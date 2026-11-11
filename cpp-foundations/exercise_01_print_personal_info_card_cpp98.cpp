#include <iostream>
#include <string>

const std::string name    = "Youssef Abbya";
const std::string city    = "Marrakech";
const std::string country = "Morocco";

const int age = 31;

void Separators()
{
    std::cout << "******************************************";
}

void PrintPersonalInfo()
{
    Separators();

    std::cout << '\n';

    std::cout << "Name    : " << name    << '\n';
    std::cout << "Age     : " << age     << '\n';
    std::cout << "City    : " << city    << '\n';
    std::cout << "Country : " << country << '\n';

    Separators();

    std::cout << '\n';
}

int main()
{
    PrintPersonalInfo();
    return 0;
}