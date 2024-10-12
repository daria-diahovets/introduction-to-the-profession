#include <iostream>
using namespace std;

// Function prototypes
int minValue(int a, int b);
int minReference(const int &a, const int &b);

int main()
{
  int num1, num2;

  // Assigning values to variables
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  // Calling a function that takes parameters by value
  cout << "Minimum value (by value): " << minValue(num1, num2) << endl;

  // Calling a function that takes parameters by reference
  cout << "Minimum value (by reference): " << minReference(num1, num2) << endl;

  return 0;
}
// A function that takes parameters by value
int minValue(int a, int b)
{
  return (a < b) ? a : b;
}

// A function that takes parameters by reference
int minReference(const int &a, const int &b)
{
  return (a < b) ? a : b;
}