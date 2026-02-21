#include <iostream>
using namespace std;

// Bubble Sort: Har pass me sabse bada element "bubble" hoke end me chala jaata hai
void BubbleSort(int arr[], int n)
{
    // Outer loop: har pass me ek element apni correct position pe fix hota hai
    for (int i = n - 1; i >= 1; i--)
    {
        // Ye check karega ki iss pass me swap hua ya nahi
        bool swapped = false;

        // Inner loop: adjacent elements compare karte hain
        for (int j = 0; j < i; j++)
        {
            // Agar left element bada hai right element se
            if (arr[j] > arr[j + 1])
            {
                // Toh dono ko swap kar do
                swap(arr[j], arr[j + 1]);

                // Mark karo ki swap hua hai
                swapped = true;
            }
        }

        // Agar ek bhi swap nahi hua
        // Matlab array already sorted hai → loop break kar do
        if (!swapped)
        {
            break;
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
    BubbleSort(arr, n);
    cout << endl;
    printArray(arr, n);
    cout << endl;
    cout << "lenght of array: " << n << endl;
    cout << endl;
}