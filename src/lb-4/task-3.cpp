#include <iostream>
using namespace std;

void multiply(int *a, int *b, int *result);

int main()
{
  int num1 = 3, num2 = 10, result;
  multiply(&num1, &num2, &result);
  cout << "Result: " << result << endl; // 30
  return 0;
}

void multiply(int *a, int *b, int *result)
{
  *result = (*a) * (*b);
}