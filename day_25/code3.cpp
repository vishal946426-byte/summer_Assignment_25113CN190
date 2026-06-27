#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> name = {
        " vishal",
        " atul",
        "nancy",
        "manisha",
        "neha"};
    sort(name.begin(), name.end());

    for (string name : name)
    {
        cout << name << endl;
    }
    return 0;
}