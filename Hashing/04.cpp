#include <bits/stdc++.h>
using namespace std;

/* Counting Frequencies of Array Elements */

vector<vector<int>> countFrequencies(vector<int>& nums) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }

    vector<vector<int>> vc;
    for (auto it : mp) {
        vc.push_back({it.first, it.second});
    }

    return vc;
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 3};
   
    vector<vector<int>> vc = countFrequencies(nums);

    // output
    for (auto it : vc) {
        cout << it[0] << "->" << it[1] << endl;
    }

    return 0;
}