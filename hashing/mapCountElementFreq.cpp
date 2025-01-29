// Map stores all the value in Sorted Manner..

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arraySize = 5;
    int arr[arraySize] {1, 2, 3, 2, 1};

    map<int, int> mpp;

    for(int i = 0; i < arraySize; i++) {
        mpp[arr[i]]++;
    }

    for(auto it: mpp) {
        cout << it.first << " occurs " << it.second << " times." << endl;
    }

    return 0;
}
