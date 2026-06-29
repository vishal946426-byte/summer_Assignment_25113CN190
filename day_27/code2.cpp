#include <iostream>
#include <vector>
using namespace std;
struct Employee
{
    int id;
    string name;
    double salary;
};
int main()
{
    vector<Employee> emp;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Employee e;

        cin >> e.id;
        cin >> e.name;
        cin >> e.salary;

        emp.push_back(e);
    }

    for (auto e : emp)
    {
        cout << e.id << " " << e.name << " " << e.salary << " " << endl;
    }
    return 0;
}
