#include <iostream>
#include <vector>

using namespace std;

void printOccurence(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count = count + 1;
            }
        }
        cout << "occurence of " << arr[i] << " is: " << count << endl;
    }
}

vector<int> countOccurence(int arr[], int n)
{
    vector<int> hash(9, 0);

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    return hash;
}

vector<int> CharHash(string s)
{
    vector<int> charHash(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        charHash[s[i] - 'a']++;
    }
    return charHash;
}

int main()
{
    // int arr[] = {1, 1, 2, 1, 3, 1, 2, 2, 3, 6, 6, 3, 8, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // vector<int> occurence = countOccurence(arr, n);

    // for(int i = 0; i < occurence.size(); i++) {
    //     cout << "Count of " << i << " = " << occurence[i] << endl;
    // }
    string s = "aabbccddeeffgghhiijjkkllmmnnnoooppqqrrerssttuuvvwwyyxxzz";
    vector<int> freq = CharHash(s);

    for (int i = 0; i < freq.size();i++)
    {
        cout << char(i + 'a') << " : " << freq[i] << endl;
    }

    return 0;
}
