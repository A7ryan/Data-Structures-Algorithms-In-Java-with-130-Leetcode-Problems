#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr{1, 8, 10, 7, 19, 22, 33, 40};
    int pivot = 8;
    int fPointer = 0;
    int cPointer = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[cPointer] <= pivot) {
            swap(arr[fPointer], arr[cPointer]);
            fPointer++;
            cPointer++;
        }
        else {
            cPointer++;
        }
    }


    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
