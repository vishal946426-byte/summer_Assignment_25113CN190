#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "enter the position";
    cin >> n;
    cout << n << "th fibonacci term is:" << fibonacci(n) << endl;
    return 0;
}