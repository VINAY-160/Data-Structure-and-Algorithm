#include <iostream>
using namespace std;

int main() {

    int n = 5;

    for (int i = 1; i <= n; i++) {

        // spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        char ch = 'A';

        // left half (increasing)
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }

        ch -= 2; // step back to previous char

        // right half (decreasing)
        for (int j = 1; j <= i - 1; j++) {
            cout << ch;
            ch--;
        }

        cout << endl;
    }

    return 0;
}
