#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "enter two numbers";
    cin >> n1 >> n2;
    int max;
    if (n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }
    while (true)
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "lcm is:" << max << endl;
            break;
        }
        max++;
    }
    return 0;
}