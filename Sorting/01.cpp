#include <bits/stdc++.h>
using namespace std;

/* Selection Sort */

int main() {
    vector<int> nums = {13, 46, 24, 9, 52, 20, 9};

    for (int i = 0; i < nums.size(); i++) {
        int min_index = i;

        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] < nums[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            swap(nums[i], nums[min_index]);
        }
    }

    // output
    for (auto it : nums) {
        cout << it << endl;
    }

    return 0;
}