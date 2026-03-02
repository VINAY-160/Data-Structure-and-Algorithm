#include <iostream>
#include <vector>
using namespace std;

int notApperingTwice(vector<int> arr)
{
    int size = arr.size();

    for (int i = 0; i < size - 1; i += 2)
    {
        if (arr[i] != arr[i + 1])
        {
            return arr[i];
        }
    }

    return arr[size - 1]; // last element case

    //use just xor all element
    
}
int main()
{
    vector<int> vec = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    cout << notApperingTwice(vec);
    return 0;
}