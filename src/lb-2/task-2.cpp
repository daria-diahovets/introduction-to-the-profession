#include <iostream>
using namespace std;

int main()
{
  int year1, year2;
  // Entering values
  cout << "Enter the first year: ";
  cin >> year1;
  cout << "Enter the second year (must be greater than the first): ";
  cin >> year2;

  if (year1 < 0 || year2 < 0 || year2 <= year1)
  {
    cout << "Incorrect input! Try again." << endl;
    return 0;
  }

  int tenthCount = 0; // Counter for every 10 years
  int yearsPassed = year2 - year1; // Calculate the number of years between years

  for (int i = year1; i <= year2; i++)
  {
    // Stops if more than 100 years have passed
    if (yearsPassed >= 100)
    {
      cout << "The difference in years is more than 100." << endl;
      return 0;
    }
    // If the year is a multiple of 10, increment the counter
    if (i % 10 == 0)
    {
      tenthCount++;
    }
    cout << i << " ";
  }

  cout << "\nTotal number of years that are multiples of 10: " << tenthCount << endl;
  return 0;
}