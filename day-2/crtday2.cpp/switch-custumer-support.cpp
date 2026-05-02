#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Customer Support Menu\n";
    cout << "1. Support\n";
    cout << "2. Billing\n";
    cout << "3. Technical Support\n";
    cout << "4. Speak to Agent\n";
    cout << "5. Return\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "You selected Support";
            break;

        case 2:
            cout << "You selected Billing";
            break;

        case 3:
            cout << "You selected Technical Support";
            break;

        case 4:
            cout << "Connecting to Agent...";
            break;

        case 5:
            cout << "Return Process Initiated";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}