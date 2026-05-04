#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {

        // 1. Print spaces
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // 2. Print stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}