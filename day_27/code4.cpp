#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    int roll;
    float m1, m2, m3, m4, m5;

    cout << " enter name: ";
    getline(cin, name);

    cout << " enter roll no:";
    cin >> roll;
    cout << " enter marks of 5 subjects:\n";
    cin >> m1, m2, m3, m4, m5;

    float total = m1 + m2 + m3 + m4 + m5;
    float percentage = total / 5;

    char grade;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n----------MARKSHEET-----------\n";
    cout << " name      :" << name << endl;
    cout << " roll no   :" << roll << endl;
    cout << " total   :" << total << endl;
    cout << " percentage   :" << fixed << setprecision(2) << "%" << endl;
    cout << " grade      :" << grade << endl;

    return 0;
}