#include <iostream>
using namespace std;

// Example 1:
// Input:N = 153
// Output:True
// Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153

// Example 2:
// Input:N = 371
// Output: True
// Explanation: 3^3+7^3+1^3 = 27 + 343 + 1 = 371

static bool isArmstrong(int num)
{
    int k = to_string(num).length();
    int sum = 0;
    int n = num;

    while (n > 0)
    {
        int ld = n % 10;
        sum += pow(ld, k);
        n /= 10;
    }

    return sum == num;
}

int main()
{
    int number = 153;

    if (isArmstrong(number))
    {
        cout << number << " is an Armstrong number." << endl;
    }
    else
    {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
