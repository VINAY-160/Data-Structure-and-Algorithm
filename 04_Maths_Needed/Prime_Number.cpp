#include <iostream>
using namespace std;

// Example 1:
// Input:N = 2 
// Output:True    
// Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
                                        
// Example 2:
// Input:N =10                           
// Output: False             
// Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.                          

bool is_Prime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout<<i<<endl;
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (is_Prime(n)) {
        cout << n << " is a Prime number." << endl;
    } else {
        cout << n << " is NOT a Prime number." << endl;
    }

    return 0;
}
