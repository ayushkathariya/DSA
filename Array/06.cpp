#include <bits/stdc++.h>
using namespace std;

/* Rotate array by k elements */

void reverse_array(vector<int>&  arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate_arr(vector<int>& arr, int k, string direction) {
    if (direction == "left") {
        reverse_array(arr, 0, arr.size() - 1);

        reverse_array(arr, arr.size() - k, arr.size() - 1);

        reverse_array(arr, 0 , arr.size() - k - 1);
    } else {
        reverse_array(arr, 0, arr.size() - 1);

        reverse_array(arr, 0, k - 1);

        reverse_array(arr, k, arr.size() - 1);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 2;
    string direction = "right";

    rotate_arr(arr, k, direction);

    // output 
    for (auto it : arr) {
        cout << it << endl;
    }

    return 0;
}