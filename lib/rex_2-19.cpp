
// Revision Example Topic: Arithmetic and Statistic Operations

#include <iostream>

// Declaration of some stream objects.

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Define and initialize variables, they are numbers which will be used in program process, with zero(0).
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    // Take three numbers from user.
    cout << "Enter three numbers consecutively: ";
    cin >> n1 >> n2 >> n3;

    // Give `sum`, `average` and `product` of the numbers to user via `cout`.
    cout << "Sum: " << n1 + n2 + n3 << endl;
    cout << "Average: " << (n1 + n2 + n3) / 3 << endl;
    cout << "Product: " << n1 * n2 * n3 << endl;

    // Some new define-initializements of variables.
    int biggest = 0;
    int lowest = 0;

    // Selection of the biggest~&~lowest number of given numbers.
    if (n1 > n2) {
        biggest = n1;
        if (n3 > n1) biggest = n3;

        lowest = n2;
        if (n3 < n2) lowest = n3;
    } else {
        biggest = n2;
        if (n3 > n2) biggest = n3;

        lowest = n1;
        if (n3 < n1) lowest = n3;
    }

    cout << "The lowest: " << lowest << endl;
    cout << "The biggest: " << biggest;
}
