#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Input N: ";
    cin >> N;

    int sumEven = 0;  // Sum of even numbers
    int sumOdd = 0;   // Sum of odd numbers
    int sumAll = 0;   // The total sum of all numbers

    cout << "Even numbers from 1 to " << N << ": ";
    
    // Loop to find all numbers
    for (int i = 1; i <= N; i++) {
        sumAll += i;  // Add each number to the total

        if (i % 2 == 0) {  // If the number is even
            cout << i << " ";  // We output an even number
            sumEven += i;  // We add it to the sum of even numbers
        } else {
            sumOdd += i;  // Add to the sum of odd numbers
        }
    }

    cout << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "The total sum of all numbers: " << sumAll << endl;

    // Add up all the amounts, convert to float, divide by 2
    float result = (sumEven + sumOdd + sumAll) / 2.0;

    cout << "Result (sum of all sums divided by 2): " << result << endl;

    return 0;
}
