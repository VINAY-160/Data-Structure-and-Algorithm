#include <iostream>
using namespace std;

// Example 1:
// Input: N1 = 9, N2 = 12

// Output: 3
// Explanation:
// Factors of 9: 1, 3, 9
// Factors of 12: 1, 2, 3, 4, 6, 12
// Common Factors: 1, 3
// Greatest common factor: 3 (GCD)

// Example 2:
// Input: N1 = 20, N2 = 15

// Output: 5
// Explanation:
// Factors of 20: 1, 2, 4, 5, 10, 20
// Factors of 15: 1, 3, 5, 15
// Common Factors: 1, 5
// Greatest common factor: 5 (GCD)

int Find_GCD(int num1, int num2)
{
    int gcd = 1;
    int min_num = min(num1, num2);

    for (int i = 1; i <= min_num; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int findGcd(int a, int b)
{
    // Continue loop as long as both
    // a and b are greater than 0
    while (a > 0 && b > 0)
    {
        // If a is greater than b,
        // subtract b from a and update a
        if (a > b)
        {
            // Update a to the remainder
            // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else
        {
            // Update b to the remainder
            // of b divided by a
            b = b % a;
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if (a == 0)
    {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}

int main()
{

    int n1, n2;
    cout << "Enter First And Second Number: " << endl;
    cin >> n1 >> n2;

    int gcd = Find_GCD(n1, n2);
    int gcd_Euclid = findGcd(n1, n2);
    cout << "GCD OF " << n1 << " and " << n2 << " is: " << gcd<<endl;
    cout << "GCD OF " << n1 << " and " << n2 << " is: " << gcd_Euclid;

    return 0;
}