#include <iostream>
using namespace std;

int main() {
    // Remainder when divided by 7
    int number;
    cout << "Enter an integer number: ";
    cin >> number;

    int remainder = number % 7;
    cout << "Remainder when dividing " << number << " by 7: " << remainder << endl;

    // Checking divisibility of first number by second
    int num1, num2;
    cout << "\nEnter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    if (num2 != 0) {
        if (num1 % num2 == 0) {
            cout << num1 << " is divisible by " << num2 << " without a remainder." << endl;
        } else {
            cout << num1 << " is divisible by " << num2 << " with remainder." << endl;
        }
    } else {
        cout << "Error: division by zero is not possible." << endl;
    }

    // Checking the parity of numbers
    cout << "\nParity of numbers:" << endl;
    cout << "First number (" << num1 << "): " << (num1 % 2 == 0 ? "even" : "odd") << endl;
    cout << "Second number (" << num2 << "): " << (num2 % 2 == 0 ? "even" : "odd") << endl;

    return 0;
}
