#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr {2, 1, 5, 8, 9, 4, 6};
    int k = 3;

    for(int i = 0; i <= arr.size() - k; i++) {
        int sum = 0;
        for(int j = i; j < (i+k); j++) {
            // cout << arr[j] << " ";
            sum += arr[j];
        }
        cout << sum << " ";
        cout << endl;
    }
    return 0;
}
