#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = n; j >= i; j--)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}