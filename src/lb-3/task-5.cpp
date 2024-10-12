#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
  int number;
  cout << "Input number: ";
  cin >> number;

  cout << "Factorial: " << factorial(number) << endl;

  return 0;
}

int factorial(int num)
{
  if (num == 1 || num == 0)
  {
    return 1;
  }
  return num * factorial(num - 1);
}