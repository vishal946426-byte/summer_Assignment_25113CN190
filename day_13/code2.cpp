#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;

    cout << " enter  5 elements :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = sum / 5.0;

    cout << " sum of array elements" << sum << endl;
    cout << " average of array elements:" << average << endl;

    return 0;
}