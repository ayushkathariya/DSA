#include <bits/stdc++.h>
using namespace std;

/* Find a missing number in an array. */

int find_missingnum(vector<int> arr) {
    int sum = 0;
    int expected_sum = 0;
    int n = arr.size() + 1;

    for (int i = 0; i < n - 1; i++) {
        sum = sum + arr[i];
    }

    expected_sum = (n * (n + 1)) / 2;

    return expected_sum - sum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 6};

    cout << find_missingnum(arr) << endl;
    
    return 0;
}