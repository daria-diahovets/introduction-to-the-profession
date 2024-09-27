#include <iostream>
using namespace std;

int main()
{
    // User input number
    int number;
    cout << "Enter an integer number: ";
    cin >> number;

    // Postfix incrementation
    cout << "\nNumber before postfix incrementation: " << number << endl;
    cout << "Number after postfix incrementation: " << number++ << endl;
    cout << "The number after performing postfix incrementation: " << number << endl;

    // Prefix incrementation
    cout << "\nNumber before prefix incrementation: " << number << endl;
    cout << "Number after prefix incrementation: " << ++number << endl;

    // Postfix decrementation
    cout << "\nNumber before postfix decrementation: " << number << endl;
    cout << "Number after postfix decrementation: " << number-- << endl;
    cout << "The number after performing postfix decrementation: " << number << endl;

    // Prefix decrementation
    cout << "\nNumber before prefix decrementation: " << number << endl;
    cout << "Number after prefix decrementation: " << --number << endl;

    return 0;
}

/*
Memo
Postfix incrementation (number++):
First, the current value of the variable is displayed, then it is incremented by one.
Prefix incrementation (++number):
First the value of the variable is incremented, then it is output.
Postfix decrementation (number--):
First the current value is displayed, then it is decreased by one.
Prefix decrementation (--number):
First the value of the variable is decreased, then it is output.
*/