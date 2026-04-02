#include <bits/stdc++.h>
using namespace std;

/* Quick Sort */

int partition(vector<int>& arr, int low, int high) {
    int pivotElem = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivotElem && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivotElem && j >= low + 1) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);

    return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {

        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);

        quickSort(arr, pivotIndex + 1, high);
    }

}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int low = 0;
    int high = arr.size() - 1;

    quickSort(arr, low, high);

    // output
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }

    return 0;
}