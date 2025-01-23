#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr{2, 1, 5, 8, 9, 4, 6};
    int k = 5;
    int firstSum = 0;
    int fPointer = 0;
    for(int i = 0; i < k; i++) firstSum += arr[i];
    cout << firstSum << endl;
    // 2 + 1 + 5 = 8
    // k = 8
    int sum = firstSum;
    for(int j = k; j < arr.size(); j++) {
        sum = (sum + arr[j]) - arr[fPointer]; // 14
        fPointer++; 
        cout << sum << " " << endl;
    }
    
    return 0;
}
