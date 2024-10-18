#include <iostream>
using namespace std;

void swapWithoutTemp(int *a, int *b);

int main() {
  int x = 17, y = 71;
  cout << "Before swap: x = " << x << ", y = " << y << endl; // Before swap: x = 17, y = 71
  swapWithoutTemp(&x, &y);
  cout << "After swap: x = " << x << ", y = " << y << endl; // After swap: x = 71, y = 17
  return 0;
}

void swapWithoutTemp(int* a, int* b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}