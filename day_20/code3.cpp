#include <iostream>
using namespace std;

int main()
{
    int matrix[2][2] = {
        {1, 2},
        {3, 4}};

    for (int i = 0; i < 2; i++)
    {

        int rowsum = 0;

        for (int j = 0; j < 2; j++)
        {
            rowsum += matrix[i][j];
        }

        cout << " sum of row " << i + 1 << " =" << rowsum << endl;
    }
    return 0;
}