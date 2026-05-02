#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    while(true)
    {
        cout << "Enter a positive number (negative to stop): ";
        cin >> num;

        if(num < 0)
            break;   // terminate loop immediately

        sum = sum + num;   // add to running sum
    }

    cout << "Sum = " << sum;

    return 0;
}