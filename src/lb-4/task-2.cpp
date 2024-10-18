#include <iostream>
using namespace std;

void countEvenOdd(int *a, int *b, int *c, int *evenCount, int *oddCount);

int main() {
  int x = 48, y = 31, z = 17;
  int evenCount, oddCount;
  countEvenOdd(&x, &y, &z, &evenCount, &oddCount);
  cout << "Even: " << evenCount << ", Odd: " << oddCount << endl; //Even: 1, Odd: 2
  return 0;
}

void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount) {
  *evenCount = 0;
  *oddCount = 0;

  *a % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
  *b % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
  *c % 2 == 0 ? (*evenCount)++ : (*oddCount)++;
}