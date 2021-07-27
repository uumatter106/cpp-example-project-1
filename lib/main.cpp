
//? Task: Learning C++ .

#include <iostream>

void part1();
void part21();
void part22();

int main() {
    part22();
}

// 'Welcome' message printing
void part1() {
    // Passing a welcome here message to stdout.
    std::cout << "Welcome here again!\n";

    // Message is the same message. But it was splitted.
    std::cout << "Welcome here\n again!\n";
}

// Sum of two numbers.
void part21() {
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

// Sum of two numbers.
void part22() {
    // Defining and assigning variables('number1', 'number2') with zero as initial value via chained assignment processing.
    //! Caution: This chainment is a bad way for assigning. In that way, you can't comment properly what they are named or used for.
    int number1 = 0, number2 = 0;

    // We want to enter a integer number from user firstly.
    std::cout << "Enter first integer: ";
    std::cin >> number1;

    // We want to enter another integer number after that.
    std::cout << "Enter second integer: ";
    std::cin >> number2;

    // Sum them all and say the result on the same line.
    std::cout << "Sum is " << number1 + number2 << std::endl;
}
