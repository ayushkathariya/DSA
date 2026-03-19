#include <bits/stdc++.h>
using namespace std;

/* ordered and unordered map */

int main() {
    int n;
    cout << "Enter size of n: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> mp;
    for (auto i : arr) {
        mp[i]++;
    }

    int q;
    cout << "Enter no. of queries: ";
    cin >> q;

    while (q--) {
        int num; 
        cout << "Enter query: ";
        cin >> num;

        cout << "The frequency of " << num << " is " << mp[num] << endl; 
    }

    return 0;
}