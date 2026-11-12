#include <print>
#include <iostream>
#include <string>

struct Date
{
    int day;
    int month;
    int year;
};

struct Person
{
    std::string name;
    int age;
    Date birthDate;
};

void ReadPersonInfo(Person& person)
{
    std::println("Enter your name: ");
    std::getline(std::cin, person.name);

    std::println("Enter your age: ");
    std::cin >> person.age;

    std::println("Enter your birth day: ");
    std::cin >> person.birthDate.day;

    std::println("Enter your birth month: ");
    std::cin >> person.birthDate.month;

    std::println("Enter your birth year: ");
    std::cin >> person.birthDate.year;
}

void PrintPersonInfo(const Person& person)
{
    std::println("Name      : {}",       person.name);
    std::println("Age       : {}",       person.age);
    std::println("Birthday  : {}/{}/{}", person.birthDate.day,
                                         person.birthDate.month, 
                                         person.birthDate.year);
}

void RunProgram()
{
    Person person;

    ReadPersonInfo(person);
    PrintPersonInfo(person);
}

int main()
{
    RunProgram();
    return 0;
}