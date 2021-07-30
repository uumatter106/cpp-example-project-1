
// Revision Example Topic: Odd or Even

#include <iostream>

// Declaration of some stream funs.
using std::cout;
using std::cin;

int main() {
    // Define and initialize the number with zero(0).
    int num = 0;

    // Take a number from user.
    cout << "Enter a number: ";
    cin >> num;

    // Control divisibility of the number that requires for understanding whether it is odd/even.
    if (num % 2 == 0) {
        cout << "Your given number " << num << " is EVEN!";
        return 0; // *Quick Returning (That causes to drop `else` statement of `if` statement)
    }
    cout << "Your given number " << num << " is ODD!";
}
