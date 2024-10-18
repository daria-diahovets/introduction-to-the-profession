#include <iostream>
using namespace std;

int main()
{
  int size;

  cout << "Enter the size of the square: ";
  cin >> size;

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      // If this is a square border (first or last row/column)
      if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}

/* Example */

/*
Enter the size of the square: 7
*******
*     *
*     *
*     *
*     *
*     *
*******
*/