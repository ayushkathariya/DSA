#include <bits/stdc++.h>
using namespace std;

/* Declare number hashing */

int main() {
    int n;
    cout << "Enter size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter values of an array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hash_arr[13] = {0};
    for (int i = 0; i < n; i++) {
        hash_arr[arr[i]] += 1;
    }

    int q;
    cout << "Enter no. of queries: ";
    cin >> q;

    while (q--) {
        int num;
        cout << "Enter query: ";
        cin >> num;
        cout << "Frequency of " << num << " is " <<  hash_arr[num] << endl;
    }

    return 0;
}