#include <bits/stdc++.h>
using namespace std;

/* Remove the repeating elements in a sorted array */

int remove_repelem(vector<int>& arr) {
    int i = 0;

    for (int j = 1; j < arr.size(); j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

int main() {
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int count = remove_repelem(arr);

    // output
    for (int i = 0; i < count; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}