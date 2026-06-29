#include <iostream>
#include <vector>
using namespace std;

struct Employee
{
    int id;
    string name;
    double basic, hra, da, total;
};

int main()
{
    int n;
    cin >> n;

    vector<Employee> emp(n);

    for (int i = 0; i < n; i++)
    {
        cin >> emp[i].id;
        cin >> emp[i].name;
        cin >> emp[i].basic;

        emp[i].hra = emp[i].basic * 0.20;
        emp[i].da = emp[i].basic * 0.10;
        emp[i].total =
            emp[i].basic +
            emp[i].hra +
            emp[i].da;
    }

    cout << "\nSalary Details\n";

    for (auto e : emp)
    {
        cout << e.id << " " << e.name << " " << e.total << " " << endl;
    }

    return 0;
}