#include <bits/stdc++.h>
using namespace std;

/* Count Maximum Consecutive One's in the array */

int find_maxcons(vector<int> arr) {
    int count = 0;
    int max_count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            count++;
            max_count = max(count, max_count);
        } else {
            count = 0;
        }
    }

    return max_count;
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1};

    cout << find_maxcons(arr) << endl;

    return 0;
}