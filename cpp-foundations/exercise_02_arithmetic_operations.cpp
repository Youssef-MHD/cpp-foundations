#include <print>
#include <iostream>

void AskForNumbers(int& firstNumber, int& secondNumber)
{
    std::println("Enter first number: ");
    std::cin >> firstNumber;

    std::println("Enter second number: ");
    std::cin >> secondNumber;
}

int Addition(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}

int Subtraction(int firstNumber, int secondNumber)
{
    return firstNumber - secondNumber;
}

int Multiplication(int firstNumber, int secondNumber)
{
    return firstNumber * secondNumber;
}

double Division(int firstNumber, int secondNumber)
{
    // Only need to cast one operand to double to make the division happen using floating-point arithmetic.
    return static_cast<double>(firstNumber) / secondNumber;
}

int Modulus(int firstNumber, int secondNumber)
{
    return firstNumber % secondNumber;
}

void PrintOperations(int firstNumber, int secondNumber)
{
    std::println("{} + {} = {}", firstNumber, secondNumber, Addition(firstNumber, secondNumber));
    std::println("{} - {} = {}", firstNumber, secondNumber, Subtraction(firstNumber, secondNumber));
    std::println("{} * {} = {}", firstNumber, secondNumber, Multiplication(firstNumber, secondNumber));

    if (secondNumber != 0)
    {
        std::println("{} / {} = {}", firstNumber, secondNumber, Division(firstNumber, secondNumber));
        std::println("{} % {} = {}", firstNumber, secondNumber, Modulus(firstNumber, secondNumber));
    }
    else
    {
        std::println("Division and modulus by zero are not allowed.");
    }
}

void StartProgram()
{
    int firstNumber{};
    int secondNumber{};

    AskForNumbers(firstNumber, secondNumber);
    PrintOperations(firstNumber, secondNumber);
}

int main()
{
    StartProgram();
    return 0;
}