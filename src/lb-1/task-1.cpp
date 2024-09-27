#include <iostream>

using namespace std;

int main()
{
  // Declaring variables for length and width
  int a, b;
  // Entering length and width
  cout << "Enter the length of the rectangle: ";
  cin >> a;
  cout << "Enter the width of the rectangle: ";
  cin >> b;
  // Calculating area and perimeter
  int S = a * b;
  int P = 2 * (a + b);
  // Casting area and perimeter to floating point type
  float S_float = static_cast<float>(S);
  float P_float = static_cast<float>(P);
  // Calculations
  float sum = S_float + P_float;
  float difference = S_float - P_float;
  float product = S_float * P_float;
  float quotient = S_float / P_float;
  // Output of area and perimeter
  cout << "\nArea: " << S << endl;
  cout << "Perimeter: " << P << endl;
  // Output of calculations
  cout << "\nSum of area and perimeter: " << sum << endl;
  cout << "Difference between area and perimeter: " << difference << endl;
  cout << "Product of area and perimeter: " << product << endl;
  cout << "Quotient of area and perimeter: " << quotient << endl;
  // Output of addresses of variables in memory
  cout << "\nThe address is variable a: " << &a << endl;
  cout << "The address is variable b: " << &b << endl;
  cout << "The address is variable S: " << &S << endl;
  cout << "The address is variable P: " << &P << endl;
  cout << "The address is variable S_float: " << &S_float << endl;
  cout << "The address is variable P_float: " << &P_float << endl;
  cout << "The address is variable sum: " << &sum << endl;
  cout << "The address is variable difference: " << &difference << endl;
  cout << "The address is variable product: " << &product << endl;
  cout << "The address is variable quotient: " << &quotient << endl;

  return 0;
}