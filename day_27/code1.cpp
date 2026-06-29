#include <iostream>
#include <vector>
using namespace std;

struct student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    vector<student> students;
    int n;

    cout << " number of student : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        student s;
        cin >> s.roll;
        cin >> s.name;
        cin >> s.marks;

        students.push_back(s);
    }
    cout << "\nreconds\n";

    for (auto s : students)
    {
        cout << s.roll << " " << s.name << " " << s.marks << " " << endl;
    }

    return 0;
}