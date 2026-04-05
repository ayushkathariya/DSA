#include <bits/stdc++.h>
using namespace std;

/* Remove the repeating elements in a sorted array */

vector<int> remove_repelem(vector<int> arr) {
    vector<int> temp;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1] && i > 0) {
            continue;
        }

        temp.push_back(arr[i]);
    }

    return temp;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 4};

    vector<int> new_arr = remove_repelem(arr);

    // output
    for (auto it : new_arr) {
        cout << it << endl;
    }

    return 0;
}