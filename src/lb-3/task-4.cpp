#include <iostream>
using namespace std;

void swapByValue(int a, int b);
void swapByReference(int &a, int &b);

int main()
{
  int x = 10, y = 20;
  // swapByValue
  cout << "Before swapByValue: x = " << x << ", y = " << y << endl;
  swapByValue(x, y);
  cout << "After swapByValue (no changes): x = " << x << ", y = " << y << endl;
  // swapByReference
  cout << "\nBefor swapByReference: x = " << x << ", y = " << y << endl;
  swapByReference(x, y);
  cout << "After swapByReference: x = " << x << ", y = " << y << endl;

  return 0;
}

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
