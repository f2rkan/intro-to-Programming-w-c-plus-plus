#include<stdlib.h>
#include<iostream>
#include<conio.h>



using namespace std;

int main(void)
{

    int * matrix;
    int maxr, maxc;

    int i, j;

    cout << "enter the dimension of the array (row col): ";
    cin >> maxr >> maxc;

    matrix = new int[maxr * maxc];

    cout << "enter the elements of the array for each row: ";

    for(i = 0; i < maxr; i++)
    {
        for(j = 0; j < maxc; j++)
        {
            cin >> *(matrix + i * maxc + j);
        }
    }

    cout << "\nThe given array in two dimensional:\n";

    for(i = 0; i < maxr; i++)
    {
        for(j = 0; j < maxc; j++)
        {
            cout << *(matrix + i * maxc + j) << '\t';
        }
        cout <<'\n';
    }

    delete [] matrix;

    return 0;
}