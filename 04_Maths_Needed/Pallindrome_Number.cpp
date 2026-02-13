#include <iostream>
using namespace std;

// Example 1:
// Input:N = 4554
// Output:Palindrome Number
// Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
                                        
// Example 2:
// Input:N = 7789          
// Output: Not Palindrome
// Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome
            
bool Is_Palindrome(int n) {
    int rev = 0;
    int original = n;

    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    return rev == original;
}

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    if (Is_Palindrome(n)) {
        cout << "Yes Palindrome...";
    } else {
        cout << "Not Palindrome...";
    }

    return 0;
}
