#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 5}};
    int diagonalsum = 0;

    for (int i = 0; i < 3; i++)
    {
        diagonalsum += matrix[i][i];
    }

    cout << " Digonal sum = " << diagonalsum << endl;

    return 0;
}