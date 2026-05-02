#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0)
            continue;   // skip multiples of 3

        cout << i <<"";
    }

    return 0;
}