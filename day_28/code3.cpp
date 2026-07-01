#include <iostream>
#include <vector>
using namespace std;

struct Ticket
{
    string name;
    int seatNo;
};

int main()
{
    vector<Ticket> bookings;
    int choice;

    do
    {
        cout << "\n1. Book Ticket";
        cout << "\n2. View Bookings";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Ticket t;

            cout << "Passenger Name: ";
            cin >> t.name;

            cout << "Seat Number: ";
            cin >> t.seatNo;

            bookings.push_back(t);

            cout << "Ticket Booked Successfully\n";
            break;
        }

        case 2:
            cout << "\nBooked Tickets\n";

            for (auto t : bookings)
            {
                cout << "Name : "
                     << t.name
                     << "  Seat : "
                     << t.seatNo
                     << endl;
            }
            break;
        }

    } while (choice != 3);

    return 0;
}