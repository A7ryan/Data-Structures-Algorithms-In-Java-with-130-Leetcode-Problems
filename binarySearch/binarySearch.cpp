#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr {1, 2, 5, 7, 10, 12, 13, 18, 19, 21, 22, 33, 40};
    int targetElement = 11;
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == targetElement) {
            cout << "Element " << targetElement << " found at Index: " << mid;
            return 0;
        }

        else if(targetElement < arr[mid]) {
            high = mid - 1;
        }

        else {
            low = mid + 1;
        }
    }

    cout << "Element " << targetElement << " does not exist in Array!" << endl;
    return 0;
}
