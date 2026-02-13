// Example 1:
// Input:N = 12345
// Output:5
// Explanation:  The number 12345 has 5 digits.

// Example 2:
// Input:N = 7789
// Output: 4
// Explanation: The number 7789 has 4 digits.

#include <iostream>
using namespace std;

int count_digit(int n)
{
    int count = (int)(log10(n)+1);  //best approach
    // if (n == 0)
    // {
    //     count = 1;
    // }
    // else
    // {
    //     while (n != 0)   //# Brute Force
    //     {
    //         count++;
    //         n = n / 10;
    //     }
    // }

    return count;
}

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    int count = count_digit(n);
    cout << "The number " << n << " has " << count << " digits." << endl;
    return 0;
}
