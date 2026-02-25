#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int>& arr)
{
    int n = arr.size();
    if (n < 2) return -1;

    int largest = arr[0];
    int secondLargest = -1;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}
int main()
{

    vector<int> arr = {2, 6, 1, 7, 2, 0,8,8};
    int size = arr.size();

    int largest = secondLargest(arr);
    cout << "SECOND LARGEST ELEMENT IS: " << largest;

    return 0;
}