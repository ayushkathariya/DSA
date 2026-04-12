#include <bits/stdc++.h>
using namespace std;

/* Find the number that appears once, and the other numbers twice */

int find_num(vector<int> nums) {
    int xorr = 0;

    for (int i = 0; i < nums.size(); i++) {
        xorr = xorr ^ nums[i];
    }

    return xorr;
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 1};

    cout << find_num(nums) << endl;

    return 0;
}