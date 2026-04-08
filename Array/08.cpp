#include <bits/stdc++.h>
using namespace std;

/* Find an element using linear search. */

int find_elem(vector<int>& arr, int elem) {
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == elem) {
            return i;
        }
    }

    return index;
}

int main() {
    int elem = 4;
    vector<int> arr = {1, 3, 2, 6, 5, 4, 7 ,9};

    cout << find_elem(arr, elem) << endl;

    return 0;
}