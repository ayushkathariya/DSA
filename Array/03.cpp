#include <bits/stdc++.h>
using namespace std;

/* Check if an array is sorted or not */

bool is_sorted(vector<int> arr) {
    if (arr.size() <= 1) return true;

    string order = arr[0] > arr[1] ? "DESC" : "ASC";

    for (int i = 0; i <= arr.size() - 2; i++) {
        if (order == "ASC") {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }

        if (order == "DESC") {
            if (arr[i] < arr[i + 1]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    cout << is_sorted(arr1) << endl;

    vector<int> arr2 = {5, 4, 3, 2, 1};
    cout << is_sorted(arr2) << endl;

    vector<int> arr3 = {1, 3, 2, 4, 5};
    cout << is_sorted(arr3) << endl;

    return 0;
}