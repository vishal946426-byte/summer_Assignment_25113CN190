#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the position of n:";
    cin >> n;
    int t1 = 0, t2 = 1, nextterm;
    if (n == 1)
    {
        cout << "first term is:" << t1 << endl;
    }
    else if (n == 2)
    {
        cout << " second term:" << t2 << endl;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            nextterm = t1 + t2;
            t1 = t2;
            t2 = nextterm;
        }
        cout << n << "th term is :" << t2 << endl;
    }
    return 0;
}