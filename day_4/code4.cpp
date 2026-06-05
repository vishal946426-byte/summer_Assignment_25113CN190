#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cout << " enter starting and ending range:";
    cin >> start >> end;

    cout << "armstrong num number are:";

    for (int i = start; i <= end; i++)
    {
        int num = i;
        int sum = 0;

        while (num > 0)
        {
            int digit = num % 10;
            sum = sum + (digit * digit * digit);
            num = num / 10;
        }
        if (sum == i)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}