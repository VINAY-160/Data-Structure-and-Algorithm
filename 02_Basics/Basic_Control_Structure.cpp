#include <iostream>
using namespace std;

int main() {

    cout << "===== IF STATEMENT =====" << endl;
    int a = 10;

    if (a > 5) {
        cout << "a is greater than 5" << endl;
    }

    cout << "\n===== IF - ELSE =====" << endl;
    int b = 3;

    if (b % 2 == 0) {
        cout << "b is even" << endl;
    } else {
        cout << "b is odd" << endl;
    }

    cout << "\n===== ELSE IF LADDER =====" << endl;
    int marks = 75;

    if (marks >= 90) {
        cout << "Grade A" << endl;
    } else if (marks >= 75) {
        cout << "Grade B" << endl;
    } else if (marks >= 60) {
        cout << "Grade C" << endl;
    } else {
        cout << "Fail" << endl;
    }

    cout << "\n===== SWITCH CASE =====" << endl;
    int day = 3;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }

    cout << "\n===== FOR LOOP =====" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "\n===== WHILE LOOP =====" << endl;
    int x = 1;
    while (x <= 5) {
        cout << x << " ";
        x++;
    }
    cout << endl;

    cout << "\n===== DO WHILE LOOP =====" << endl;
    int y = 1;
    do {
        cout << y << " ";
        y++;
    } while (y <= 5);
    cout << endl;

    cout << "\n===== NESTED FOR LOOP =====" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    cout << "\n===== BREAK STATEMENT =====" << endl;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;
        }
        cout << i << " ";
    }
    cout << endl;

    cout << "\n===== CONTINUE STATEMENT =====" << endl;
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    cout << "\n===== NESTED IF =====" << endl;
    int age = 20;
    bool hasID = true;

    if (age >= 18) {
        if (hasID) {
            cout << "Allowed to enter" << endl;
        } else {
            cout << "ID required" << endl;
        }
    } else {
        cout << "Underage" << endl;
    }

    cout << "\nProgram executed successfully." << endl;

    return 0;
}
