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
    int choice;

    do
    {
        cout << "\n1.Add Employee";
        cout << "\n2.Display Employees";
        cout << "\n3.Exit\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Employee e;

            cout << "ID: ";
            cin >> e.id;

            cin.ignore();

            cout << "Name: ";
            getline(cin, e.name);

            cout << "Salary: ";
            cin >> e.salary;

            emp.push_back(e);
            break;
        }

        case 2:
            for (auto e : emp)
            {
                cout << e.id
                     << " "
                     << e.name
                     << " "
                     << e.salary
                     << endl;
            }
            break;
        }

    } while (choice != 3);

    return 0;
}