#include <iostream>
using namespace std;

// selection means min at first position or index.....

void SelectionSort(int arr[], int n)
{
    // Outer loop: har position ko ek baar fix karne ke liye
    for(int i = 0; i < n-1; i++){
        
        // Maan lete hain ki current position hi minimum hai
        int minIndex = i;

        // Inner loop: i ke baad wale elements me actual minimum dhundhne ke liye
        for(int j = i+1; j < n; j++){
            
            // Agar current min se chhota element milta hai
            if(arr[j] < arr[minIndex]){
                
                // Toh uska index store kar lo
                minIndex = j;
            }
        }

        // Agar minimum element current position pe nahi hai
        if(minIndex != i){
            
            // Toh swap kar do taaki chhota element correct jagah aa jaye
            swap(arr[i], arr[minIndex]);
        }
        
        // Ab tak i position tak ka array sorted ho chuka hai
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {7, 22, 56, 101, 99, 32, 73};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    cout << endl;
    cout << "lenght of array: " << n << endl;
    SelectionSort(arr, n);
    cout << endl;
    printArray(arr, n);
    cout << endl;
    cout << "lenght of array: " << n << endl;
    cout << endl;
}