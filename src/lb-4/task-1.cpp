#include <iostream>
using namespace std;

void copyValue(int *source, int *destination);

int main()
{
  int a = 52, b = 35;
  copyValue(&a, &b);
  cout << "Copy value: b = " << b << endl; // Copy value: b = 52
  return 0;
}

void copyValue(int *source, int *destination)
{
  *destination = *source;
}
