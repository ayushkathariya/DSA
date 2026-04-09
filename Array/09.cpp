#include <bits/stdc++.h>
using namespace std;

/* Find the union of two sorted arrays. */

vector<int> find_union(vector<int> arr1, vector<int> arr2) {
    vector<int> union_arr;
    int m = arr1.size();
    int n = arr2.size();
    int i = 0;
    int j = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            if (union_arr.size() == 0 || union_arr.back() != arr1[i]) {
                union_arr.push_back(arr1[i]);
            }
            i++;
        } else {
            if (union_arr.size() == 0 || union_arr.back() != arr2[j]) {
                    union_arr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < m) {
        if (union_arr.size() == 0 || union_arr.back() != arr1[i]) {
            union_arr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n) {
        if (union_arr.size() == 0 || union_arr.back() != arr1[j]) {
            union_arr.push_back(arr2[j]);
        }
        j++;
    }

    return union_arr;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};

    vector<int> new_arr = find_union(arr1, arr2);

    // output
    for (int it : new_arr) {
        cout << it << endl;
    }

    return 0;
}