
// Revision Example 2.5 C++ file

#include <iostream>

// Declaration of use of stream functions.
using std::cout;
using std::cin;

int main() {
    // Define and initialize variables with zero(0).
    int x = 0;
    int y = 0;
    int z = 0;
    int sum = 0;

    // Take three numbers from user and assign them `x`, `y`, `z` variables.

    cout << "Enter the first number: ";
    cin >> x;

    cout << "Enter the second number: ";
    cin >> y;

    cout << "Enter the third number: ";
    cin >> z;

    // Assign `sum` variable with production of that three numbers.
    sum = x * y * z;

    // Show the product of numbers to user.
    cout << "The product is " << sum;
}
