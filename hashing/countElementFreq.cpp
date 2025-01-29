#include <bits/stdc++.h>
using namespace std;

int main() {
    int arrSize = 5;
    int arr[arrSize] = {1, 2, 3, 2, 1};

    int hashTable[4] {0}; // initialize all with 0


    for(int i = 0; i < arrSize; i++) {
        hashTable[arr[i]]++;
    }


    // Used 4 here 'coz we already know Array has max Element 3
    for(int i = 1; i < 4; i++) {
        cout << i << " occurs: " << hashTable[i] << " times." << endl;
    }

    return 0;
}
