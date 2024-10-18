#include <iostream>
using namespace std;

void findMinMax(int *a, int *b, int *c, int *min, int *max);

int main() {
  int x = 10, y = 20, z = 30, min, max;
  findMinMax(&x, &y, &z, &min, &max);

  cout << "Min: " << min << ", max: " << max << endl; // Min: 10, max: 30

  return 0;
}

void findMinMax(int *a, int *b, int *c, int *min, int *max) {
  *min = *max = *a;

  if (*b < *min) *min = *b;
  if (*c < *min) *min = *c;

  if (*b > *max) *max = *b;
  if (*c > *max) *max = *c;
}