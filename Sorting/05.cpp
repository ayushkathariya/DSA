#include <bits/stdc++.h>
using namespace std;

/* Recursive Bubble Sort */

void bubble_sort(vector<int>& arr, int n) {
    if (n == 1) {
        return;
    }

    bool is_sorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            is_sorted = false;
        }
    }

    if (is_sorted) {
        return;
    }

    bubble_sort(arr, n - 1);
}

int main() {
    vector<int> arr = {3, 2, 8, 5, 1, 4, 23};

    bubble_sort(arr, arr.size());

    for (int it : arr) {
        cout << it << endl;
    }

    return 0;
}