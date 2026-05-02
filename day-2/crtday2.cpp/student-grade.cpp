#include <iostream>
using namespace std;

int main()
{
    int per;

    cout << "Enter percentage (0 to 100): ";
    cin >> per;

    if(per < 0 || per > 100)
    {
        cout << "Invalid input";
    }
    else if(per >= 80 && per <= 89)
    {
        cout << "Grade A";
    }
    else if(per >= 60 && per <= 79)
    {
        cout << "Grade B";
    }
    else if(per >= 50 && per <= 59)
    {
        cout << "Grade C";
    }
    else if(per >= 30 && per <= 49)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}