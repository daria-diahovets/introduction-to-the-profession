#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of lines for the triangle: ";
    cin >> n;

    // The outer loop controls the number of rows
    for (int i = 1; i <= n; i++) {
        // The inner loop outputs spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // The inner loop prints out the asterisks
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;  // Move to a new line after each line of asterisks
    }

    return 0;
}

// Example
//      *
//     **
//    ***
//   ****
//  *****