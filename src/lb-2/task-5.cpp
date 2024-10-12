
#include <iostream>
using namespace std;

int main()
{
  int a, b;

  // Entering integers
  cout << "Enter the first number: ";
  cin >> a;
  cout << "Enter the second number: ";
  cin >> b;

  // Output of variable addresses
  cout << "Address of variable a: " << &a << endl;
  cout << "Address of variable b: " << &b << endl;

  // If the first number is greater than the second, we swap them
  if (a > b)
  {
    int temp = a;
    a = b;
    b = temp;
  }

  // Output of numbers from first to second with a minus sign
  cout << "Numbers from " << a << " to " << b << " with a minus sign: ";
  for (int i = a; i <= b; i++)
  {
    cout << -i << " ";
  }
  cout << endl;

  return 0;
}
