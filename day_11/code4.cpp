#include <iostream>
using namespace std;
long factorial(int n)
{
    long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    long long result = factorial(n);
    cout << "factorial of" << n << "is:" << result << endl;
    return 0;
}