#include <bits/stdc++.h>
using namespace std;

/* Find the union of two sorted arrays. */

vector<int> find_union(vector<int> arr1, vector<int> arr2) {
    set<int> st;

    for (int i = 0; i < arr1.size(); i++) {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++) {
        st.insert(arr2[i]);
    }

    vector<int> new_arr(st.begin(), st.end());

    return new_arr;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5};

    vector<int> new_arr = find_union(arr1, arr2);

    // output
    for (int it : new_arr) {
        cout << it << endl;
    }

    return 0;
}