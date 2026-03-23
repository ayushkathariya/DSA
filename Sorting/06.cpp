#include <bits/stdc++.h>
using namespace std;

/* Recursive Insertion Sort */

void insertion_sort(vector<int>& arr, int i, int n) {
    if (i == n) {
        return;
    }

    int j = i;

    while (j > 0 && arr[j - 1] > arr[j]) {
        swap(arr[j - 1], arr[j]);
        j--;
    }

    insertion_sort(arr, i + 1, n);
}

int main() {
    vector<int> arr = {3, 2, 8, 5, 1, 4, 23};

    insertion_sort(arr, 0, arr.size());

    for (auto it : arr) {
        cout << it << endl;
    }

    return 0;
}