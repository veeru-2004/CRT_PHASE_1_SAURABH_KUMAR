#include <iostream>
using namespace std;


int num = 200;


void divide() {
    int userInput;
    double result;

    cout << "Enter a number: ";
    cin >> userInput;

    
    result = (double) num / userInput;

    cout << "Result is: " << result << endl;
}

int main() {
    divide();
    return 0;
}
