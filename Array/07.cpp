#include <bits/stdc++.h>
using namespace std;

/* Move all zeros to the end of the array */

void move_arr(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            arr.push_back(arr[i]);
            arr.erase(arr.begin() + i);
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};

    move_arr(arr);

    // output
    for (int it : arr) {
        cout << it << endl;
    }

    return 0;
}