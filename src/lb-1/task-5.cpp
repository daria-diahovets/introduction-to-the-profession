#include <iostream>
using namespace std;

int main()
{
  // Declaring variable
  int grade;
  cout << "Enter your grade (0-100): ";
  cin >> grade;
  // Checking conditions
  if (grade > 0 && grade <= 25)
  {
    cout << "unsatisfactorily";
    return 0;
  }
  else if (grade > 25 && grade <= 50)
  {
    cout << "satisfactorily";
    return 0;
  }
  else if (grade > 50 && grade <= 75)
  {
    cout << "good";
    return 0;
  }
  else if (grade > 75 && grade <= 100)
  {
    cout << "perfectly";
    return 0;
  }
  else
  {
    cout << "Incorrect grade.";
    return 0;
  }
}