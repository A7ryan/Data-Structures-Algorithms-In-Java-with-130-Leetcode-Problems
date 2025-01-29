#include <bits/stdc++.h>
using namespace std;

int main() {
    int arraySize = 5;
    char arr[arraySize] {'a', 'b', 'c', 'b', 'a'};

    unordered_map<char, int> mpp;

    for(int i = 0; i < arraySize; i++) {
        mpp[arr[i]]++;
    }

    for(auto it : mpp) {
        cout  << it.first << " occurs " << it.second << " times." << endl;
    }
    return 0;
}
