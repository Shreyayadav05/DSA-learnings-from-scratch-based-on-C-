#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs;
    cin >> runs; // Input: 25
    if (runs >= 100) {
        cout << "Century";
    } 
    else if (runs >= 50) {
        cout << "Half Century";
    } 
    else {
        cout << "Less than 50"; // Output: Less than 50
    }
    return 0;
}
