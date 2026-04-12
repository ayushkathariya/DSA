#include <bits/stdc++.h>
using namespace std;

/* Find Length of longest Subarray with given Sum K(Positives) */

int findLongestSubArray(vector<int> arr, int elem) {
    int max_length = 0;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++) {
            int sum = 0;

            for (int k = i; k <= j; k++) {
                sum = sum + arr[k];
            }

            if (sum == elem) {
                max_length = max(max_length, j - i + 1);
            }
        }
    }

    return max_length;
}

int main() {
    int k = 15;
    vector<int> arr = {10, 5, 2, 7, 1, 9};

    cout << findLongestSubArray(arr, k) << endl;

    return 0;
}