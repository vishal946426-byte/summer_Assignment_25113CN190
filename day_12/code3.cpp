#include <iostream>
using namespace std;

int fabonacci(int n)
{
    int t1 = 0, t2 = 1, nextt;

    cout << " fabonacci series:";
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        nextt = t1 + t2;
        t1 = t2;
        t2 = nextt;
    }
    cout << endl;
}

int main()
{
    int terms;
    cout << "enter the number of terns:";
    cin >> terms;

    fabonacci(terms);
    return 0;
}