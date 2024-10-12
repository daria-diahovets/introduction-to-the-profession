#include <iostream>
using namespace std;

// A natural number greater than 1 is called prime if it is
// not divisible by anything except itself and 1.

int main()
{
  int N;
  cout << "Enter the number N: ";
  cin >> N;

  cout << "Prime numbers from 1 to: " << N << ": ";

  // Loop for all numbers from 2 to N
  for (int num = 2; num <= N; num++)
  {
    bool isPrime = true; // We assume that the number is prime

    // Check divisibility of a number by all numbers from 2 to sqrt(num)
    // i * i <= num || i <= sqrt(num); || i < num -- equivalent
    for (int i = 2; i * i <= num; i++)
    {
      if (num % i == 0)
      {
        isPrime = false; // If there is a divisor, the number is not prime
        break;
      }
    }

    // If the number is prime, we print it
    if (isPrime)
    {
      cout << num << " ";
    }
  }

  cout << endl;
  return 0;
}