#include <bits/stdc++.h>
using namespace std;

/* Declare string hashing */

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    /* 
    For lower case: hash_arr[str[i] - 'a'] and hash_arr[26]
    For upper case: hash_arr[str[i] - 'A'] hash_arr[26]
    For all case: hash_arr[str[i]] hash_arr[256]
    */

    int hash_arr[256] = {0};
    for (int i = 0; i < str.size(); i++) {
        hash_arr[str[i]]++;
    }

    int q;
    cout << "Enter no. of queries: ";
    cin >> q;

    while (q--) {
        char ch;
        cout << "Enter character: ";
        cin >> ch;

        cout << "The frequency of " << ch << " is " << hash_arr[ch] << endl;
    }

    return 0;
} 