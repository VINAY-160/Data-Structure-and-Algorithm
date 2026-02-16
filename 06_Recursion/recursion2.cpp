#include <iostream>
using namespace std;

// Input: N = 3
// Output: Ashish Ashish Ashish
// Explanation: Name is printed 3 times.
// Input: N = 1
// Output: Ashish
// Explanation: Name is printed once.

void printName(int n)
{
    if (n == 0)
    {
        return;
    }

    cout<<"Vinay ";
    printName(n-1);
}

int main()
{   
    printName(1);

    return 0;
}