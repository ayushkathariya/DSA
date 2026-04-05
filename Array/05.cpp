#include <bits/stdc++.h>
using namespace std;

/* Left rotate the arrray by one. */

void rotate_oneleft(vector<int> arr) {
    vector<int> temp(arr.size());

    for (int i = 1; i < arr.size(); i++) {
        temp[i - 1] = arr[i];
    }

    temp[arr.size() - 1] = arr[0];

    // output
    for (int i = 0; i < temp.size(); i++) {
        cout << temp[i] << endl;
    }
}

int main() {
    vector<int> arr = {0, 3, 6, -1};

    rotate_oneleft(arr);

    return 0;
}