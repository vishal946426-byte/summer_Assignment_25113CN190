#include <iostream>
using namespace std;

int findmax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int n1, n2;
    cout << "enter two number:";
    cin >> n1 >> n2;

    int maxn = findmax(n1, n2);
    cout << "maximum number is:" << maxn << endl;
    return 0;
}