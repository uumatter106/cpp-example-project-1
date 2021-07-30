
// Revision Example Topic: Arithmetic Operation

#include <iostream>

// Open most used stream functions to use them in program.

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Define and initialize two numbers.
    int num1 = 0;
    int num2 = 0;

    // Request two numbers from `cin` object with a `cout` message.
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calculate and show results of four base arithmetic operations of the numbers.
    cout << "Sum is " << num1 + num2 << endl;
    cout << "Dif is " << num1 - num2 << endl;
    cout << "Prd is " << num1 * num2 << endl;
    cout << "Div is " << num1 / num2 << endl;
}
