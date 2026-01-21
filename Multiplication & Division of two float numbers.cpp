#include <bits/stdc++.h>
using namespace std;

int main() {
    float a;
    float b;
    cin>>a>>b;
    cout<<fixed<<setprecision(2);
    cout<<a*b<<endl;
    if(b!=0)
       cout<<a/b<<endl;
    else
       cout<<"Undefined";

    return 0;
}
