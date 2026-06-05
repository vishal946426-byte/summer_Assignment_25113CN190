#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << " enter a 3 digit number";
    cin >> num;
    int originalnum = num;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        sum += (digit * digit * digit);
        num /= 10;
    }
    if (sum == originalnum)
    {
        cout << originalnum << " is a armstrong number" << endl;
    }
    else
    {
        cout << originalnum << "is not a armstrong number" << endl;
    }
    return 0;
}
