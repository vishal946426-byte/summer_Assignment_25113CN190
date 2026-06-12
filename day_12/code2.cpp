#include <iostream>
using namespace std;

bool isarmstrong(int n)
{
    int originaln = n;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum += (digit * digit * digit);
        n = n / 10;
    }

    if (sum == originaln)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout << " enter a 3-digit number:";
    cin >> n;
    if (isarmstrong(n))
    {
        cout << n << "  is a an armstrong number" << endl;
    }
    else
    {
        cout << n << " is not a armsptrong number" << endl;
    }
    return 0;
}