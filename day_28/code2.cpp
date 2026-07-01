#include <iostream>
using namespace std;

class Bankaccount
{
    string name;
    int accNo;
    double balance;

public:
    void creataccount()
    {
        cout << "name:";
        cin >> name;

        cout << " accout number:";
        cin >> accNo;
        cout << " enter balance: ";
        cin >> balance;
    }
    void deposit()
    {
        double amount;
        cout << " enter ammount: ";
        cin >> amount;
        if (amount > 0)
        {
            balance += amount;
            cout << " amount depositedsuccesfully.\n";
        }
    }
    void withdrow()
    {
        double amount;
        cout << " enter amount:";
        cin >> amount;

        if (amount > balance)
        {
            cout << " insufficient balance";
        }
        else
        {
            balance -= amount;

            cout << " withdrow succesfully.\n";
        }
    }

    void display()
    {
        cout << "\n =======Account holder details=======";
        cout << "\n account holder:" << name << endl;
        cout << "\n account number:" << accNo << endl;
        cout << "\n balance" << balance << endl;
    }
};
int main()
{
    Bankaccount acc;

    int choice;

    acc.creataccount();
    do
    {
        cout << "\n1. Deposit";
        cout << "\n2. Withdrow";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\n Choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            acc.deposit();
            break;

        case 2:
            acc.withdrow();
            break;
        case 3:
            acc.display();
            break;
        }

    } while (choice != 4);

    return 0;
}
