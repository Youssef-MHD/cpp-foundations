#include <print>
#include <iostream>

void GetNumbersFromUser(int& firstNumber, int& secondNumber)
{
    std::println("Enter first number: ");
    std::cin >> firstNumber;

    std::println("Enter second number: ");
    std::cin >> secondNumber;
}

bool AreEqual(int firstNumber, int secondNumber)
{
    return firstNumber == secondNumber;
}

bool AreNotEqual(int firstNumber, int secondNumber)
{
    return firstNumber != secondNumber;
}

bool IsGreaterThan(int firstNumber, int secondNumber)
{
    return firstNumber > secondNumber;
}

bool IsLessThan(int firstNumber, int secondNumber)
{
    return firstNumber < secondNumber;
}

bool IsGreaterThanOrEqual(int firstNumber, int secondNumber)
{
    return firstNumber >= secondNumber;
}

bool IsLessThanOrEqual(int firstNumber, int secondNumber)
{
    return firstNumber <= secondNumber;
}

void PrintComparisonResults(int firstNumber, int secondNumber)
{
    std::println("{} =  {} is {}", firstNumber, secondNumber, AreEqual(firstNumber, secondNumber));
    std::println("{} != {} is {}", firstNumber, secondNumber, AreNotEqual(firstNumber, secondNumber));
    std::println("{} >  {} is {}", firstNumber, secondNumber, IsGreaterThan(firstNumber, secondNumber));
    std::println("{} <  {} is {}", firstNumber, secondNumber, IsLessThan(firstNumber, secondNumber));
    std::println("{} >= {} is {}", firstNumber, secondNumber, IsGreaterThanOrEqual(firstNumber, secondNumber));
    std::println("{} <= {} is {}", firstNumber, secondNumber, IsLessThanOrEqual(firstNumber, secondNumber));
}

void RunProgram()
{
    int firstNumber{};
    int secondNumber{};

    GetNumbersFromUser(firstNumber, secondNumber);
    PrintComparisonResults(firstNumber, secondNumber);
}

int main()
{
    RunProgram();
    return 0;
}