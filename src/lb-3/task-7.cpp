#include <iostream>
#include <string>
#include <cmath>

using namespace std;
// Function prototypes
// Task 1
int sum(int a, int b);
double sum(double a, double b);
string sum(const string &a, const string &b);
// Task 2
int minValue(int a, int b);
int minReference(const int &a, const int &b);
// Task 3
double area(double side);
double area(double length, double width);
double area(double radius, bool isCircle);
double area(double a, double b, double c);
// Task 4
void swapByValue(int a, int b);
void swapByReference(int &a, int &b);
// Task 5
int factorial(int num);
// Task 6
void drawSquare(int size);

void callAllFunctions();

// Main function
int main()
{
  callAllFunctions(); // Call the function callAllFunctions()
  return 0;
}

// Task 1. Overloaded sum functions for different data types
int sum(int a, int b) { return a + b; }
double sum(double a, double b) { return a + b; }
string sum(const string &a, const string &b) { return a + b; }

// Task 2. Functions for finding the minimum value
int minValue(int a, int b) { return (a < b) ? a : b; }
int minReference(const int &a, const int &b) { return (a < b) ? a : b; }

// Task 3. Overloaded functions for calculating the area of ​​various figures
double area(double side) { return side * side; } // Square
double area(double length, double width) { return length * width; } // Rectangle
double areaCircle(double radius) { return M_PI * radius * radius; } // Circle
double areaTriangle(double base, double height) { return 0.5 * base * height; } // Triangle

// Task 4. Swap functions for replacing the values ​​of two variables
void swapByValue(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}

void swapByReference(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

// Task 5. Recursive function for finding factorial
int factorial(int num)
{
  if (num == 1 || num == 0)
  {
    return 1;
  }
  return num * factorial(num - 1);
}

// Task 6. Function for drawing a square
void drawSquare(int size)
{
  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size; ++j)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

// Task 7. Function that calls all functions
void callAllFunctions()
{
  cout << "Sum of integers: " << sum(5, 10) << endl;
  cout << "Sum of doubles: " << sum(5.5, 4.5) << endl;
  cout << "Sum of strings: " << sum("Dr", "Zoidberg") << endl;

  int a = 3, b = 7;
  cout << "Min by value: " << minValue(a, b) << endl;
  cout << "Min by reference: " << minReference(a, b) << endl;

  cout << "Area of square: " << area(4.0) << endl;
  cout << "Area of rectangle: " << area(4.0, 6.0) << endl;
  cout << "Area of circle: " << areaCircle(5.0) << endl;
  cout << "Area of triangle: " << areaTriangle(5.0, 3.0) << endl;

  int x = 10, y = 20;
  cout << "Before swap (by reference): x = " << x << ", y = " << y << endl;
  swapByReference(x, y);
  cout << "After swap (by reference): x = " << x << ", y = " << y << endl;

  int n = 5;
  cout << "Factorial of " << n << " = " << factorial(n) << endl;

  cout << "Square of stars:" << endl;
  drawSquare(5);
}
