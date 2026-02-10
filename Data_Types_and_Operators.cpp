#include <iostream>
using namespace std;

int main() {

    cout << "===== C++ DATA TYPES =====" << endl;

    // 1. Integer types
    int a = 10;
    short s = 5;
    long l = 100000;
    long long ll = 1000000000;

    cout << "int: " << a << endl;
    cout << "short: " << s << endl;
    cout << "long: " << l << endl;
    cout << "long long: " << ll << endl;

    // 2. Floating point types
    float f = 10.5f;
    double d = 20.12345;
    long double ld = 30.123456;

    cout << "float: " << f << endl;
    cout << "double: " << d << endl;
    cout << "long double: " << ld << endl;

    // 3. Character and Boolean
    char ch = 'A';
    bool isTrue = true;

    cout << "char: " << ch << endl;
    cout << "bool: " << isTrue << endl;

    // 4. Derived / Other types
    int arr[3] = {1, 2, 3};
    cout << "array element: " << arr[0] << endl;

    cout << "\n===== C++ OPERATORS =====" << endl;

    int x = 10, y = 3;

    // 1. Arithmetic Operators
    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;   // integer division
    cout << "x % y = " << x % y << endl;

    // 2. Relational Operators
    cout << "x > y = " << (x > y) << endl;
    cout << "x < y = " << (x < y) << endl;
    cout << "x == y = " << (x == y) << endl;
    cout << "x != y = " << (x != y) << endl;

    // 3. Logical Operators
    cout << "(x > 5 && y < 5) = " << (x > 5 && y < 5) << endl;
    cout << "(x > 5 || y > 5) = " << (x > 5 || y > 5) << endl;
    cout << "!(x == y) = " << !(x == y) << endl;

    // 4. Assignment Operators
    int z = 5;
    z += 3;
    cout << "z after += 3 : " << z << endl;

    // 5. Increment / Decrement
    int p = 10;
    cout << "Pre-increment ++p = " << ++p << endl;
    cout << "Post-increment p++ = " << p++ << endl;
    cout << "After post-increment p = " << p << endl;

    // 6. Bitwise Operators
    int m = 5, n = 3;   // 5 = 101, 3 = 011
    cout << "m & n = " << (m & n) << endl;
    cout << "m | n = " << (m | n) << endl;
    cout << "m ^ n = " << (m ^ n) << endl;
    cout << "~m = " << (~m) << endl;
    cout << "m << 1 = " << (m << 1) << endl;
    cout << "m >> 1 = " << (m >> 1) << endl;

    cout << "\n===== OPERATOR PRECEDENCE =====" << endl;

    // Higher precedence example
    int result1 = 10 + 5 * 2;   // * has higher precedence than +
    cout << "10 + 5 * 2 = " << result1 << endl;

    // Parentheses change precedence
    int result2 = (10 + 5) * 2;
    cout << "(10 + 5) * 2 = " << result2 << endl;

    // Logical precedence
    bool result3 = true || false && false;
    cout << "true || false && false = " << result3 << endl;

    bool result4 = (true || false) && false;
    cout << "(true || false) && false = " << result4 << endl;

    // Assignment precedence
    int q, r;
    q = r = 5;   // right to left associativity
    cout << "q = " << q << ", r = " << r << endl;

    return 0;
}
