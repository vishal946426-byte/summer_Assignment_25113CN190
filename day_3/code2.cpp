#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cout << "enter starting and ending :";
    cin >> start >> end;
    cout << "prime number are:";
    for (int num = start; num <= end; num++)
    {
        if (num <= 1)
        {
            continue;
        }
        int isprime = 1;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}