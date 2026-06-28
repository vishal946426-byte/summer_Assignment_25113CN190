#include <iostream>
using namespace std;

int main()
{
    int balance = 5000;
    int choice, amount;

    do
    {
        cout << "\n 1.check balance";
        cout << "\n 2.deposite";
        cout << "\n 3.withdrow";
        cout << "\n 4.exit\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << " balance=" << balance;
            break;

        case 2:
            cin >> amount;
            balance += amount;
            break;
        case 3:
            cin >> amount;

            if (amount <= balance)
                balance -= amount;
            cout << " ensufficient balance";
            break;
        }
    } while (choice != 4);

    return 0;
}