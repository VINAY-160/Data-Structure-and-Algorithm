#include <iostream>
using namespace std;

//insertion mean take one element and then place it correctly while checking the left element..
void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)   // i = 1 se start hota hai
    {
        int j = i;

        // Jab tak left element bada hai
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;   
        }
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
    InsertionSort(arr, n);
    cout << endl;
    printArray(arr, n);
    cout << endl;
    cout << "lenght of array: " << n << endl;
    cout << endl;
}