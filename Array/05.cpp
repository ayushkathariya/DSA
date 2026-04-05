#include <bits/stdc++.h>
using namespace std;

/* Left rotate the arrray by one. */

void rotate_oneleft(vector<int>& arr) {
    int temp = arr[0];

    arr.erase(arr.begin() + 0);
    arr.push_back(temp);
}

int main() {
    vector<int> arr = {0, 3, 6, -1};

    rotate_oneleft(arr);

    // output
    for (int it : arr) {
        cout << it << endl;
    }

    return 0;
}