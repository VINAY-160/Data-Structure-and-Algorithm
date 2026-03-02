#include <iostream>
#include <vector>
using namespace std;

void movezeroEnd(vector<int> &arr){
    int n=arr.size();

    int j=0;
    for(int i=0;i<n;i++){

        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

}

int main()
{
    vector<int> vec = {1, 0, 2, 3, 0, 0, 0, 0, 4, 2, 1};
    movezeroEnd(vec);
    for (auto x : vec)
    {
        cout << x << " ";
    }
    return 0;
}