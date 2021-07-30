
// Revision Example Topic: Comparising Numbers

#include <iostream>

// Declaration of `cout` fun.
using std::cout;
using std::cin;

int main() {
    // Define and initialize them with zero(0).
    int num1 = 0;
    int num2 = 0;

    // Take two numbers from user.
    cout << "Enter two numbers: ";
    // * Please enter two numbers with space to `cin`.
    cin >> num1 >> num2;

    // Compare the numbers, find the biggest one, show it to user or just say "the numbers are equal" to user.
    if (num1 > num2) {
        cout << "The biggest number is " << num1;
        return 0;
    }
    if (num1 == num2) {
        cout << "The numbers are equal";
        return 0;
    }

    /* Two variables has three comparison phases(`>`, `<`, `==`).
        ? Our numbers had already passed two comparison phases which are 'bigger than(>)' and 'is equal to(==)'
        ? If the program had came to here then there was only one comparison phase left which is `<`.
        ? So there is no need to use if statement for `<` comparison phase.

        ! But that makes a drawback. Because we may not know certainly what comparison phase left.
        ! AND code reader(programmer) may not infer this phase.
    */
    cout << "The biggest number is " << num2;
}
