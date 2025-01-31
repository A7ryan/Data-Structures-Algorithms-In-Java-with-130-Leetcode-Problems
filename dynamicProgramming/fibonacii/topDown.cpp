#include <bits/stdc++.h>
using namespace std;

int findFibonaci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    return findFibonaci(n - 1) + findFibonaci(n - 2);
}

int main() {
    int n = 7;
    int fiboNum = findFibonaci(n);
    cout << "Fibonacci of " << n << " is: " << fiboNum << endl;
    return 0;
}
