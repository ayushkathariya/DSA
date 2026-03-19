#include <bits/stdc++.h>
using namespace std;

/* Highest Occurring Element in an Array */

int mostFrequentElement(vector<int>& nums) {
    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }

    int maxFrequency = 0;
    int mostFrequentElem = INT_MAX;

    for (auto it : mp) {
        if (it.second > maxFrequency) {
            maxFrequency = it.second;
            mostFrequentElem = it.first;
        } else if (it.second == maxFrequency) {
            if (it.first < mostFrequentElem) {
                mostFrequentElem = it.first;
            }
        }
    }

    return mostFrequentElem;
}

int main() {
    vector<int> vc = {4, 4, 5, 5, 6};

    int element = mostFrequentElement(vc);
    cout << element << endl;

    return 0;
}