#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    bool hasLicense;
    
    cout << "Enter your age: ";
    cin >> age; // Input: 18
    cout << "Do you have a driving license? (1 for Yes, 0 for No): ";
    cin >> hasLicense; // Input: 1

    if (age >= 18) {
        if (hasLicense) {
            cout << "You are eligible to drive!"; // Output: You are eligible to drive!
        } 
        else {
            cout << "You need a driving license to drive.";
        }
    } 
    else {
        cout << "You are not old enough to drive.";
    }
    return 0;
}
