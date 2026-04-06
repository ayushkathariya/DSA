#include <bits/stdc++.h>
using namespace std;

/* Rotate array by k elements */

void rotate_arr(vector<int>& arr, int k, string rotate) {
    if (rotate == "left") {
        vector<int> temp(k);

        for (int i = 0; i < k; i++) {
            temp[i] = arr[i];
        }

        for (int i = 0; i < arr.size() - k; i++) {
            arr[i] = arr[i + k];
        }

        for (int i = 0; i < temp.size(); i++) {
            arr[arr.size() - k + i] = temp[i];
        }
    } else {
        vector<int> temp(k);

        for (int i = 0; i < k; i++) {
            temp[i] = arr[arr.size() - k + i];
        }

        for (int i = arr.size() - k - 1; i >= 0; i--) {
            arr[i + k] = arr[i];
        }

        for (int i = 0; i < k; i++) {
            arr[i] = temp[i];
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 2;
    string rotate = "right";

    rotate_arr(arr, k, rotate);

    // output 
    for (auto it : arr) {
        cout << it << endl;
    }

    return 0;
}