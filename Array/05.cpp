#include <bits/stdc++.h>
using namespace std;

/* Left rotate the array by one. */

void rotate_oneleft(vector<int> arr) {
    int temp = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        arr[i - 1] = arr[i];
    }

    arr[arr.size() - 1] = temp;

    // output
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    vector<int> arr = {0, 3, 6, -1};

    rotate_oneleft(arr);

    return 0;
}