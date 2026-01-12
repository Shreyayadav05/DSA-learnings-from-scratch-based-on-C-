#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 42;
    float d = 5.51564;
    double e = 3.14159265359;
    char f = 'A';
    string g = "Hello, C++";
    long b = 1234567890L;
    long long c = 123456789012345LL;
    bool x = true;

    cout << "Integer a = " << a << " and size is " << sizeof(a) << " bytes" << endl;
    cout << "long b = " << b << " and size is " << sizeof(b) << " bytes" << endl;
    cout << "long long c = " << c << " and size is " << sizeof(c) << " bytes" << endl;
    cout << "float d = " << d << " and size is " << sizeof(d) << " bytes" << endl;
    cout << "double e = " << e << " and size is " << sizeof(e) << " bytes" << endl;
    cout << "char f = " << f << " and size is " << sizeof(f) << " bytes" << endl;
    cout << "string g = " << g << " and size is " << sizeof(g) << " bytes" << endl;
    cout << "boolean value x = " << x << " and size is " << sizeof(x) << " bytes" << endl;

    return 0;
}
