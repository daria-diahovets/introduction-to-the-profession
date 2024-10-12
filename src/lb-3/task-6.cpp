#include <iostream>
using namespace std;

void drawSquare(int size);

int main()
{
    int size;
    cout << "Enter the size of the square side: ";
    cin >> size;

    drawSquare(size);

    return 0;
}

void drawSquare(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
// Example
// Enter the size of the square side: 5
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 