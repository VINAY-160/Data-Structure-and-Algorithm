#include <iostream>
#include <vector>
using namespace std;

void leftRotatebyOne(int arr[], int n)
{
    int first_idx = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = first_idx;
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: ";
    printarray(arr,size);
    leftRotatebyOne(arr,size);
    cout<<"\nLeft Rotated Array by One: ";
    printarray(arr,size);


}
