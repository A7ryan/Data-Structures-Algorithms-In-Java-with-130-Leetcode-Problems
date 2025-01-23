#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr1 {1, 5, 8, 9, 10};
    vector<int> arr2 {2, 4, 7, 18};
    vector<int> c;

    int i = 0, j = 0;
    int n = arr1.size();
    int m = arr2.size();

    while(i < n || j < m) {
        if(i < n && j < m) {
            if(arr1[i] <= arr2[j]) {
                c.push_back(arr1[i]);
                i++;
            }
            else {
                c.push_back(arr2[j]);
                j++;
            }
        }
        else if(i < n) {
            c.push_back(arr1[i]);
            i++;
        }
        else {
            c.push_back(arr2[j]);
            j++;
        }
    }

    for(int x = 0; x < c.size(); x++) {
        cout << c[x] << " ";
    }
    return 0;
}
