#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {

    int arr[] = {1,2,2,3,3,3,4,4,4,4};
    int n = 10;

    unordered_map<int,int> freq;

    // Step 1: Frequency count
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int minFreq = INT_MAX;

    int maxElement = -1;
    int minElement = -1;

    // Step 2: Traverse map
    for(auto it : freq) {

        if(it.second > maxFreq) {
            maxFreq = it.second;
            maxElement = it.first;
        }

        if(it.second < minFreq) {
            minFreq = it.second;
            minElement = it.first;
        }
    }

    cout << "Max Frequency Element: " << maxElement 
         << " -> " << maxFreq << endl;

    cout << "Min Frequency Element: " << minElement 
         << " -> " << minFreq << endl;

    return 0;
}