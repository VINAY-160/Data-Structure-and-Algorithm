#include <iostream>
#include<vector>
using namespace std;

// optimal
int missing_number(int arr[], int n)
{
    int sum = ( (n+1) * (n + 2)) / 2;
    int sum2=0;
    
    for(int i=0;i<n;i++){
        sum2+=arr[i];
    }
    
    cout<<endl;
    return sum-sum2;
}

int main()
{
    int arr[] = {1, 3, 4, 5,};
    int n = 4;
    int miss =missing_number(arr,n);
    cout<<miss;
    return 0;
}