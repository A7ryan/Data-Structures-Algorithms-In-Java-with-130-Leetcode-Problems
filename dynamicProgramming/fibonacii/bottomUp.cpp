#include <bits/stdc++.h>
using namespace std;

int  main() {
    int n = 7;
    int fiboArr[n+1] {0};
    fiboArr[1] = 1;
    fiboArr[2] = 1;

    for(int i = 3; i <= n; i++) {
        fiboArr[i] = fiboArr[i-1] + fiboArr[i-2];
    }

    cout << "Fibonaci of " << n << " is: " << fiboArr[n] << endl;
    return 0;
}
