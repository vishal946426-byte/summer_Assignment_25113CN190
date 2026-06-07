#include <iostream>
using namespace std;
int sumdigit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + sumdigit(n / 10);
}
int main()
{
    int num;
    cout << " enter a number:";
    cin >> num;
    cout << "sum of digit is: " << sumdigit(num) << endl;
    return 0;
}