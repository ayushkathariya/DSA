#include <bits/stdc++.h>
using namespace std;

/* Insertion sort */

int main() {
    vector<int> nums = {13, 46, 24, 9, 52, 20, 9};

    for (int i = 0; i < nums.size(); i++) {
        int j = i;

        while (j > 0 && nums[j] < nums[j - 1]) {
            swap(nums[j], nums[j - 1]);
            j--;
        }
    }

    // output
    for (auto it : nums) {
        cout << it << endl;
    }

    return 0;
}