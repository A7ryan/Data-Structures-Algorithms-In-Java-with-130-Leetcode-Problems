#include <bits/stdc++.h>
using namespace std;

int main() {
    int charArrSize = 5;
    char arr[charArrSize] = {'a', 'b', 'c', 'b', 'a'};

    int hashTable[26]{0};
    for(int i = 0; i < charArrSize; i++) {
        hashTable[arr[i] - 'a']++;
    }

    // Highest is C which is 3rd Alphabet, if you have all 26 chars. Replace 3 below with 26!
    for(int i = 0; i < 3; i++) {
        cout << char(i + 'a') << " Occurs " << hashTable[i] << " times." << endl;
    }
    return 0;
}
