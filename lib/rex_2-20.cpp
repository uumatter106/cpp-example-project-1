
// Revision Example Topic: Diameter~&~Perimeter(Circumference = Perimeter of Circle)~&~Area of Circle

#include <iostream>

// Declaration of some useful stream objects(`cout`, `cin`, `endl`).
using std::cout;
using std::cin;
using std::endl;

int main() {
    // Define `pi` irrational number.
    /*
        ! You cauted for defining non-changeable numbers as constant.
        ! If you don't define them as constant. 
        !  Then the compiler won't be able to block you about changing the variable value.
    */
    double pi = 3.14159;

    // Define and initialize `radius` variable with zero(0).
    int radius = 0;

    // Take radius of the circle of user that is in user's mind.
    cout << "Enter the radius of your the circle who you imagined it in your mind: ";
    cin >> radius;

    // Calculate and show diameter, circumference and area of it.
    cout << "Diameter: " << 2 * radius << endl;
    cout << "Circumference: " << 2 * pi * radius << endl;
    cout << "Area: " << pi * radius * radius;
}
