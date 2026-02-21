#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &nums, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    // Dono halves compare karo
    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }
    }

    // Agar left part me elements bache ho
    while (left <= mid)
    {
        temp.push_back(nums[left]);
        left++;
    }

    // Agar right part me elements bache ho
    while (right <= high)
    {
        temp.push_back(nums[right]);
        right++;
    }

    // Temp ko wapas original array me copy karo
    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[i - low];
    }
}

void MergeSort(vector<int> &nums, int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    MergeSort(nums, low, mid);
    MergeSort(nums, mid + 1, high);

    Merge(nums, low, mid, high);
}

int main()
{
    vector<int> nums = {3, 6, 1, 2, 1, 7, 3, 8, 5, 10};
    cout << "UNSORTED ARRAY: ";
    for (int x : nums)
        cout << x << " ";
    MergeSort(nums, 0, nums.size() - 1);
    cout << "\nSORTED ARRAY  : ";

    for (int x : nums)
        cout << x << " ";

    return 0;
}