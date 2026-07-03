#include <iostream>
#include <vector>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

void addStudent(vector<Student> &students)
{
    Student s;

    cout << "Roll: ";
    cin >> s.roll;

    cin.ignore();

    cout << "Name: ";
    getline(cin, s.name);

    cout << "Marks: ";
    cin >> s.marks;

    students.push_back(s);
}

void display(vector<Student> students)
{
    if (students.empty())
    {
        cout << "No Records Found!\n";
        return;
    }

    cout << "\nStudent Records\n";

    for (auto s : students)
    {
        cout << s.roll
             << " "
             << s.name
             << " "
             << s.marks
             << endl;
    }
}

void search(vector<Student> students)
{
    int roll;

    cout << "Enter Roll Number: ";
    cin >> roll;

    bool found = false;

    for (auto s : students)
    {
        if (s.roll == roll)
        {
            cout << s.roll
                 << " "
                 << s.name
                 << " "
                 << s.marks
                 << endl;

            found = true;
        }
    }

    if (!found)
        cout << "Record Not Found\n";
}

int main()
{
    vector<Student> students;
    int choice;

    do
    {
        cout << "\n===== Student Management System =====\n";
        cout << "1.Add Student\n";
        cout << "2.Display Students\n";
        cout << "3.Search Student\n";
        cout << "4.Exit\n";
        cout << "Enter Choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent(students);
            break;

        case 2:
            display(students);
            break;

        case 3:
            search(students);
            break;
        }

    } while (choice != 4);

    return 0;
}