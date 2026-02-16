// Input: N = 5, arr[] = {5,4,3,2,1}
// Output: {1,2,3,4,5}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

// Input: N=6 arr[] = {10,20,30,40}
// Output: {40,30,20,10}
// Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int s = 0;
    int e = (sizeof(arr) / 4)-1;
    int end=e;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        cout<<arr[s]<<" "<<arr[e]<<endl;
        s++;
        e--;
    }

    for(int i=0;i<=end;i++){
        cout<<arr[i]<<" ";
    }
   
}