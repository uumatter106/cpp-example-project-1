
//? Task: Learning C++ .

#include <iostream>

void part1();
void part2();

int main() {
}

// 'Welcome' message printing
void part1() {
    // Passing a welcome here message to stdout.
    std::cout << "Welcome here again!\n";

    // Message is the same message. But it was splitted.
    std::cout << "Welcome here\n again!\n";
}

// Sum of two numbers.
void part2() {
    // Defining and assigning variables('number1', 'number2', 'sum') with zero as initial value.
    int number1 = 0;
    int number2 = 0;
    int sum = 0;

    // We want to enter a integer number from user firstly.
    std::cout << "Enter first integer: ";
    std::cin >> number1;

    // We want to enter another integer number after that.
    std::cout << "Enter second integer: ";
    std::cin >> number2;

    // Sum them all.
    sum = number1 + number2;

    // Say the result.
    std::cout << "Sum is " << sum << std::endl;
}
