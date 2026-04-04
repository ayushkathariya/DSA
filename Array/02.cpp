#include <bits/stdc++.h>
using namespace std;

/* Find second largest and second smallest in an array */

void getElements(vector<int> arr) {
    if (arr.size() == 0 || arr.size() == 1) {
        cout << "-1" << " " << "-1" << endl;
        return;
     }

    sort(arr.begin(), arr.end());

    // remove duplicates to handle cases like {1, 1, 2, 3}
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    if (arr.size() == 1) {
        cout << "-1" << " " << "-1" << endl;
        return;
    }

    cout << arr[1] << " " << arr[arr.size() - 2] << endl;
}

int main() {
    vector<int> arr = {1, 2, 7, 1, 4, 6, 7, 5};

    getElements(arr);

    return 0;
}