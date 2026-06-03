#include <iostream>
using namespace std;
int main()
{
    int num, original, reverse = 0, digit;
    cout << "enter a number:";
    cin >> num;
    original = num;
    while (num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (original == reverse)
        cout << "number is palindrame";
    else
        cout << " number is  not  palindrame";
    return 0;
}