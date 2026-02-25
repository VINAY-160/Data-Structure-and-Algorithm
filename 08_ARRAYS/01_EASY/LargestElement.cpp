#include <iostream>
#include <vector>
using namespace std;

int largestEl(vector<int> arr, int n)
{
    int greatest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[greatest] < arr[i])
        {
            greatest = i;
        }
    }
    return arr[greatest];
}

int main()
{

    vector<int> arr = {2, 6, 1, 7, 2, 0};
    int size = arr.size();

    int largest = largestEl(arr, size);
    cout << "LARGEST ELEMENT IS: " << largest;

    return 0;
}