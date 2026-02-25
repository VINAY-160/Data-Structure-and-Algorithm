#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

unordered_set<int> removeDup(const vector<int>& vec)
{
    unordered_set<int> s;

    for (int num : vec)
    {
        s.insert(num);
    }

    return s;
}

void printArray(const vector<int>& vec)
{
    for (int num : vec)
        cout << num << " ";
}

vector<int> removedupplicate(vector<int> vec,int n){
    int unique=0;
    vector<int> clean={vec[0]};
    for(int i=0;i<n;i++){
        if(vec[i]!=vec[unique]){
            clean.push_back(vec[i]);
            unique=i;
        }
    }
    return clean;
}
int main()
{
    vector<int> vec = {1, 1, 2, 3, 3, 3, 5, 7, 7, 9, 10, 10};
    int size=vec.size();
    cout << "ORIGINAL VECTOR:    ";
    printArray(vec);

    // unordered_set<int> uniqueSet = removeDup(vec);

    cout << "\nUNIQUE ELEMENTS:    ";
    // for (int num : uniqueSet)
    // {
    //     cout << num << " ";
    vector<int> vect1=removedupplicate(vec,size);
    for(auto it :vect1){
        cout<<it<<" ";
    }



    return 0;
}