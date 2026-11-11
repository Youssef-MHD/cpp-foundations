#include <print>
#include <string>

const std::string name    = "Youssef Abbya";
const std::string city    = "Marrakech";
const std::string country = "Morocco";

const int age = 31;

void Separators()
{
    std::println("******************************************");
}

void PrintPersonalInfo()
{
    Separators();

    std::println("Name    : {}", name);
    std::println("Age     : {}", age);
    std::println("City    : {}", city);
    std::println("Country : {}", country);

    Separators();
}

int main()
{
    PrintPersonalInfo();
    return 0;
}