#include <iostream>
using namespace std;

// Input: N=5
// Output: 15
// Explanation: 1+2+3+4+5=15

// Input: N=6
// Output: 21
// Explanation: 1+2+3+4+5+6=15

int sumN(int sum,int n){
    if(n==0){
        return sum;
    }
    return sumN(sum+n,n-1);

    

}

int main()
{   
    cout<<sumN(0,5);

    return 0;
}