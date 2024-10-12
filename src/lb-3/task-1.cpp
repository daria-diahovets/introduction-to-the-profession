#include <iostream>
using namespace std;

// Function prototypes
int sum(int a, int b);
double sum(double a, double b);
string sum(const string &a, const string &b);

int main()
{
    int intA = 50, intB = 2;
    cout << "Sum of integers: " << sum(intA, intB) << endl;

    double doubleA = 3.54, doubleB = 12.5;
    cout << "Sum of floating point numbers: " << sum(doubleA, doubleB) << endl;

    string strA = "Dr", strB = "Zoidberg!";
    cout << "Sum of strings: " << sum(strA, strB) << endl;

    return 0;
}

// Function for adding two integers
int sum(int a, int b)
{
    return a + b;
}

// Function to add two floating point numbers
double sum(double a, double b)
{
    return a + b;
}

// Function to add two strings
string sum(const string &a, const string &b)
{
    return a + b;
}