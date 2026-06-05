#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number:";
    cin >> num;
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        cout << num << "is a perfact number." << endl;
    }
    else
    {
        cout << num << " is not a perfact number." << endl;
    }
    return 0;
}