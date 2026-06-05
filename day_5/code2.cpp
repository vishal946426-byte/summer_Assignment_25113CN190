#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number:";
    cin >> num;
    int originalnum = num;
    int tsum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        tsum = tsum + fact;
        num = num / 10;
    }
    if (tsum == originalnum)
    {
        cout << originalnum << " is  a strong number " << endl;
    }
    else
    {
        cout << originalnum << "is nott a strong number" << endl;
    }
    return 0;
}