#include <iostream>
using namespace std;
int find_sum(int a, int b)
{
    int s = a + b;
    return s;
}
int main()
{
    int num1, num2;
    cout << "enter two numbers:";
    cin >> num1 >> num2;

    int result = find_sum(num1, num2);
    cout << "sum is: " << result << endl;
    return 0;
}