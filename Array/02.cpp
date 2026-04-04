#include <bits/stdc++.h>
using namespace std;

/* Find second largest and second smallest in an array */

void getElements(vector<int> arr) {
    if (arr.size() == 0 || arr.size() == 1) {
        cout << "-1" << " " << "-1" << endl;
        return;
     }

     int largest_elem = INT_MIN;
     int smallest_elem = INT_MAX;
     int secondlargest_elem = INT_MIN;
     int secondsmallest_elem = INT_MAX;

     for (int i = 0; i < arr.size(); i++) {
        largest_elem = max(largest_elem, arr[i]);
        smallest_elem = min(smallest_elem, arr[i]);
     }

     for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > secondlargest_elem && arr[i] != largest_elem) {
            secondlargest_elem = arr[i];
        }

        if (arr[i] < secondsmallest_elem && arr[i] != smallest_elem) {
            secondsmallest_elem = arr[i];
        }
     }

     cout << secondlargest_elem << " " << secondsmallest_elem << endl;
}

int main() {
    vector<int> arr = {1, 2, 7, 1, 4, 6, 7, 5};

    getElements(arr);

    return 0;
}