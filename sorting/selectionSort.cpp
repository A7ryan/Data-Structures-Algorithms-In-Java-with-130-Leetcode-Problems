#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr {5, 4, 10, 6, 1, 8, 10};
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        int minElement = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minElement]) {
                minElement = j;
            }
        }
        if(minElement != i) {
            swap(arr[i], arr[minElement]);
        }
    }

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
