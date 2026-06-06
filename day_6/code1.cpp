#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a decimal number:";
    cin >> num;
    long long binary = 0;
    long long place = 1;
    int temp = num;
    while (temp > 0)
    {
        int remainder = temp % 2;
        binary = binary = (remainder * place);
        place *= 10;
        temp /= 2;
    }
    cout << "binary of" << num << "is:  " << binary << endl;
    return 0;
}