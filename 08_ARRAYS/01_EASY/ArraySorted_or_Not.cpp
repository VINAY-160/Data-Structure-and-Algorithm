#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int> &vec, int n)
{
    bool issort = true;
    for (int i = 1; i < n; i++)
    {
        if ((vec[i-1] > vec[i]) && (vec[i-1] != vec[i]))
        {
            issort = false;
            return false;
        }
    }
    return issort;
}

int main()
{
    vector<int> sortedVec = {1, 1, 2, 3, 3, 3, 5, 7, 7, 9, 10, 10};
    vector<int> unsortedVec = {7, 3, 10, 1, 9, 3, 5, 1, 10, 2, 7, 3};
    int size1 = sortedVec.size();
    int size2 = unsortedVec.size();

    if (!isSorted(sortedVec, size1))
    {
        cout << "UNSORTED";
    }
    else
    {
        cout << "SORTED";
    }
    return 0;
}