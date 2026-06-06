#include <iostream>
using namespace std;
int main()
{
    int a, n;
    cout << "enter base:";
    cin >> a;
    cout << "enter power:";
    cin >> n;
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * a;
    }
    cout << a << "^" << n << "is:" << result << endl;
    return 0;
}