#include <bits/stdc++.h>
using namespace std;

/* Move all zeros to the end of the array */

void move_arr(vector<int>& arr) {
    int j = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    if (j == -1) return;

    for (int i = j + 1; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
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