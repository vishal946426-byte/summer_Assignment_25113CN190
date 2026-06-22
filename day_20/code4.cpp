#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {3, 4, 5},
        {5, 6, 7}};
    for (int i = 0; i < 3; i++)
    {
        int colsum = 0;

        for (int j = 0; j < 3; j++)
        {
            colsum = matrix[j][i];
        }

        cout << " sum of colunm " << i + 1 << "= " << colsum << endl;
    }
    return 0;
}