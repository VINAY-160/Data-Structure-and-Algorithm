#include<iostream>
#include<vector>
using namespace std;

// Input: N = 36
// Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
// Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
// Input: N = 12
// Output: [1, 2, 3, 4, 6, 12]
// Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.

void getDivisors(int n){
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            cout<<i<<" is Factor."<<endl;
        }
    }
    cout<<n<<" is Factor."<<endl;
}
int main(){

    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    
    getDivisors(n);
    return 0;
}