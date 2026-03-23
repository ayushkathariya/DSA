#include <bits/stdc++.h>
using namespace std;

/* Recursive Bubble Sort */

void bubble_sort(vector<int>& arr, int n) {
    if (n == 1) {
        return;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubble_sort(arr, n - 1);
}

int main() {
    vector<int> arr = {3, 2, 8, 5, 1, 4, 23};

    bubble_sort(arr, arr.size() - 1);

    for (int it : arr) {
        cout << it << endl;
    }

    return 0;
}