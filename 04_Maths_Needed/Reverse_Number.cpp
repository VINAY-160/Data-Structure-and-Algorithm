#include <iostream>
#include <cmath>
using namespace std;
// Input: N = 12345
// Output:54321
// Explanation: The reverse of 12345 is 54321.

// Input: N = 7789
// Output: 9877
// Explanation: The reverse of number 7789 is 9877.

int reverse_num(int n)
{
    int digit;
    int rev = 0;

    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}


int main()
{

    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int reverse = reverse_num(n);
    cout << "Reverse of " << n << " is: " << reverse << endl;
    return 0;
}
