#include <iostream>
using namespace std;

// Global variable
int num = 200;

// Function
void divide() {
    int userInput;
    double result;

    cout << "Enter a number: ";
    cin >> userInput;

    // Explicit type casting
    result = (double) num / userInput;

    cout << "Result is: " << result << endl;
}

int main() {
    divide();
    return 0;
}