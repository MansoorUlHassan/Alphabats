#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 7; col++)
        {
            if (col == 0 || col == 6 || col - row == 0)
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
    getch();
}