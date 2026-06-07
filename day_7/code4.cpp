#include <iostream>
using namespace std;
int reversenum(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    rev = (rev * 10) + (n % 10);
    return reversenum(n / 10, rev);
}
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    cout << " reverse number is " << reversenum(num, 0) << endl;
    return 0;
}