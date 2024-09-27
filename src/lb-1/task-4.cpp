#include <iostream>
using namespace std;

int main()
{
  // Declaring variables
  int age;
  int salary;
  string name, surname, desiredPosition;
  // Request age and salary
  cout << "Enter your age: ";
  cin >> age;
  cout << "Enter your salary: ";
  cin >> salary;
  // Checking conditions
  if (age > 20 && (salary > 400 && salary < 1000))
  {
    cout << "We will consider your position." << endl;;

    // Request for first name, last name and desired position
    cout << "Enter your name: " << name;
    cin >> name;
    cout << "Enter your surname: " << surname;
    cin >> surname;
    cout << "Enter your desired position: " << desiredPosition;
    cin >> desiredPosition;
    // Output all data
    cout << "\nSummary:" << endl;
    cout << "Name:" << name << endl;
    cout << "Surname:" << surname << endl;
    cout << "Age:" << age << endl;
    cout << "Salary:" << salary << endl;
    cout << "Desired Position:" << desiredPosition << endl;
    return 0;
  }
  else
  {
    cout << "You are not suitable." << endl;
    return 0;
  }
}