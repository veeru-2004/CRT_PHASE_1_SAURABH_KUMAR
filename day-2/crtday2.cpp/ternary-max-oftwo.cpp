#include <iostream>
using namespace std;

int main()
{
    int a, b, max;

    cout << "Enter two integers: ";
    cin >> a >> b;

    // Ternary operator
    max = (a > b) ? a : b;

    cout << "Maximum = " << max;

    return 0;
}