#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {2, 4, 6},
        {3, 6, 7}};

    bool symmetric = true;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                symmetric = false;
                break;
            }
        }
    }

    if (symmetric)
    {
        cout << " matrix symmetric";
    }
    else
    {
        cout << " maatrix is not symmetric";
    }

    return 0;
}