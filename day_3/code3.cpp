#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << " enter two number";
    cin >> n1 >> n2;

    int gdc = 1;
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gdc = i;
        }
    }
    cout << "GDC is:" << gdc << endl;
    return 0;
}