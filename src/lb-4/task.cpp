#include <iostream>
using namespace std;

void copyValue(int *source, int *destination);
void countEvenOdd(int *a, int *b, int *c, int *evenCount, int *oddCount);
void multiply(int *a, int *b, int *result);
void swapWithoutTemp(int *a, int *b);
void findMinMax(int *a, int *b, int *c, int *min, int *max);

int main() {
  // task 1
  int a = 52, b = 35;
  copyValue(&a, &b);
  cout << "Copy value: b = " << b << endl;
  // task 2
  int x = 48, y = 31, z = 17;
  int evenCount, oddCount;
  countEvenOdd(&x, &y, &z, &evenCount, &oddCount);
  cout << "Even: " << evenCount << ", Odd: " << oddCount << endl;
  // task 3
  int num1 = 3, num2 = 10, result;
  multiply(&num1, &num2, &result);
  cout << "Result: " << result << endl;
  // task 4
  int x1 = 17, y1 = 71;
  cout << "Before swap: x = " << x1 << ", y = " << y1 << endl;
  swapWithoutTemp(&x1, &y1);
  cout << "After swap: x = " << x1 << ", y = " << y1 << endl;
  // task 5
  int x2 = 10, y2 = 20, z2 = 30, min, max;
  findMinMax(&x2, &y2, &z2, &min, &max);
  cout << "Min: " << min << ", max: " << max << endl;

  return 0;
}

void copyValue(int *source, int *destination) {
  *destination = *source;
}
void countEvenOdd(int *a, int *b, int *c, int *evenCount, int *oddCount) {
  *evenCount = 0;
  *oddCount = 0;

  *a % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
  *b % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
  *c % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
}
void multiply(int *a, int *b, int *result){
  *result = (*a) * (*b);
}
void swapWithoutTemp(int *a, int *b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}
void findMinMax(int *a, int *b, int *c, int *min, int *max) {
  *min = *max = *a;

  if (*b < *min) *min = *b;
  if (*b > *max) *max = *b;

  if (*c < *min) *min = *c;
  if (*c > *max) *max = *c;
}

/* RESULT */
// Copy value: b = 52
// Even: 1, Odd: 2
// Result: 30
// Before swap: x = 17, y = 71
// After swap: x = 71, y = 17
// Min: 10, max: 30