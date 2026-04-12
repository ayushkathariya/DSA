#include <bits/stdc++.h>
using namespace std;

/* Find the number that appears once, and the other numbers twice */

int find_num(vector<int> nums) {
    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }

    for (auto it : mp) {
        if (it.second == 1) {
            return it.first;
        }
    }

    return - 1;
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 1};

    int num = find_num(nums);

    cout << num << endl;

    return 0;
}