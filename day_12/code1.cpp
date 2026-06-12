#include <iostream>
using namespace std;

bool ispalindrome(int n)
{
    int originaln = n;
    int reversedn = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reversedn = (reversedn * 10) + digit;
        n = n / 10;
    }
    if (originaln == reversedn)
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
    cout << " enter a  number" << endl;
    cin >> n;
    if (ispalindrome(n))
    {
        cout << n << " is a palindrom number" << endl;
    }
    else
    {
        cout << n << "  is not a palindrome number" << endl;
    }
    return 0;
}