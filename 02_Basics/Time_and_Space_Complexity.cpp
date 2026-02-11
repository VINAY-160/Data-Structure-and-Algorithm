#include <iostream>
using namespace std;

/*
==================================================
TIME & SPACE COMPLEXITY – DEMONSTRATION FILE
==================================================

TIME COMPLEXITY:
----------------
O(1)    → Constant time
O(n)    → Linear time
O(n^2)  → Quadratic time
O(log n)→ Logarithmic time
O(2^n)  → Exponential time

SPACE COMPLEXITY:
-----------------
O(1)    → Constant extra space
O(n)    → Linear extra space
O(n^2)  → Quadratic space

Note:
Time complexity depends on number of operations.
Space complexity depends on extra memory used.
*/

/// ---------- O(1) Time & O(1) Space ----------
void constantTime(int n) {
    cout << "Constant time: " << n * n << endl;
}

/// ---------- O(n) Time & O(1) Space ----------
void linearTime(int n) {
    int sum = 0;              // constant space
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Linear time sum: " << sum << endl;
}

/// ---------- O(n^2) Time & O(1) Space ----------
void quadraticTime(int n) {
    int count = 0;            // constant space
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            count++;
        }
    }
    cout << "Quadratic operations: " << count << endl;
}

/// ---------- O(log n) Time & O(1) Space ----------
void logarithmicTime(int n) {
    int count = 0;
    while (n > 1) {
        n = n / 2;
        count++;
    }
    cout << "Logarithmic steps: " << count << endl;
}

/// ---------- O(n) Space ----------
void linearSpace(int n) {
    int* arr = new int[n];    // extra memory O(n)
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    cout << "Linear space array created" << endl;
    delete[] arr;
}

/// ---------- O(n^2) Space ----------
void quadraticSpace(int n) {
    int** matrix = new int*[n];   // O(n^2) space
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    cout << "Quadratic space matrix created" << endl;

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

/// ---------- Recursive (Stack Space O(n)) ----------
void recursiveFunction(int n) {
    if (n == 0) return;
    recursiveFunction(n - 1);     // recursion depth n → O(n) space
}

int main() {

    int n = 5;

    cout << "===== TIME COMPLEXITY =====" << endl;
    constantTime(n);        // O(1)
    linearTime(n);          // O(n)
    quadraticTime(n);       // O(n^2)
    logarithmicTime(100);   // O(log n)

    cout << "\n===== SPACE COMPLEXITY =====" << endl;
    linearSpace(n);         // O(n)
    quadraticSpace(3);      // O(n^2)
    recursiveFunction(n);   // O(n) stack space

    cout << "\nProgram executed successfully." << endl;
    return 0;
}
