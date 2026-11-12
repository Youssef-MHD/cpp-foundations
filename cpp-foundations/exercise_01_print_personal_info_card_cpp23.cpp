#include <print>
#include <string>

const std::string name    = "Youssef Abbya";
const std::string city    = "Marrakech";
const std::string country = "Morocco";

const int age           = 31;
const int monthlySalary = 5000;
const int yearlySalary  = 60000;

const char gender = 'M';

const bool married = false;

void Separators()
{
    std::println("******************************************");
}

void PrintPersonalInfo()
{
    Separators();

    std::println("Name              : {}", name);
    std::println("Age               : {}", age);
    std::println("City              : {}", city);
    std::println("Country           : {}", country);
    std::println("Monthly salary    : {}", monthlySalary);
    std::println("Yearly salary     : {}", yearlySalary);
    std::println("Gender            : {}", gender);
    std::println("Married           : {}", married);

    Separators();
}

int main()
{
    PrintPersonalInfo();
    return 0;
}