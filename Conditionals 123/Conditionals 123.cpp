// Conditionals 123.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int number;

    // Asking the user to input a number
    cout << "Enter a number: ";
    cin >> number;

    // Conditional to check if the number is positive, negative, or zero
    if (number > 0) {
        cout << "The number is positive." << endl;
    }
    else if (number < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

