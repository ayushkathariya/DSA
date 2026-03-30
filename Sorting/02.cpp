#include <bits/stdc++.h>
using namespace std;

/* Bubble Sort */

int main() {
    vector<int> nums = {13, 46, 24, 9, 52, 20, 9};

    for (int i = nums.size() - 1; i >= 1; i--) {
        bool is_sorted = true;

        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);

                if (is_sorted == true) {
                    is_sorted = false;
                }
            }
        }

        if (is_sorted) {
            break;
        }
    }

    // output
    for (auto it : nums) {
        cout << it << endl;
    }

    return 0;
}