#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << " = " << x << endl
#else
    #define debug(x)
#endif

int main() {
    int a = 42, b = 27;
    debug(a); // Prints: a = 42 (in local runs)
    debug(b); // Prints: b = 27 (in local runs)

    cout << a + b << endl; // Prints: 69 (standard output)
    return 0;
}
