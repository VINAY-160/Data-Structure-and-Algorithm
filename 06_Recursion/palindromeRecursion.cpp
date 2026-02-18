#include <iostream>
using namespace std;

bool ispalindrome(int i, int n, string arr[])
{
    if (i >= n / 2)
    {
        return true;
    }
    if (arr[i] != arr[n - i - 1])
    {
        return false;
    }

    return ispalindrome(i + 1, n, arr);   
}

int main()
{
    string arr[] = {"M", "A", "D", "A", "M"};

    int len = sizeof(arr) / sizeof(arr[0]);

    if (ispalindrome(0, len, arr))
    {
        cout << "is palindrome";
    }
    else
    {
        cout << "is not palindrome";
    }

    return 0;
}
