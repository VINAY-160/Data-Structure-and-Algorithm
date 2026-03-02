#include <iostream>
using namespace std;

void reverseArray(int arr[], int s, int e)
{
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void leftRotatebyK(int arr[], int n, int k)
{
    k = k % n; // handle k > n

    // Step 1: Reverse first k elements
    reverseArray(arr, 0, k - 1);

    // Step 2: Reverse remaining n-k elements
    reverseArray(arr, k, n - 1);

    // Step 3: Reverse entire array
    reverseArray(arr, 0, n - 1);
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k;
    cout << "ENTER THE ROTATION VALUE: ";
    cin >> k;

    cout << "\nOriginal Array: ";
    printarray(arr, size);

    leftRotatebyK(arr, size, k);

    cout << "\nLeft Rotated Array by K: ";
    printarray(arr, size);

    return 0;
}