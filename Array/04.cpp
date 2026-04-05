#include <bits/stdc++.h>
using namespace std;

/* Remove the repeating elements in a sorted array */

int remove_repelem(vector<int>& arr) {
    int index = 0;
    unordered_set<int> seen;

    for (int i = 0; i < arr.size(); i++) {
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);

            arr[index] = arr[i];

            index++;
        }
    }

    return index;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 4};

    int count = remove_repelem(arr);

    // output
    for (int i = 0; i < count; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}