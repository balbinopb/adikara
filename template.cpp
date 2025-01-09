#include <bits/stdc++.h>
using namespace std;

//template
#define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(0)

// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

bool solution(ll n, ll m, ll x) {
    while (n != m) {
        if (n < x && m < x) return false;
        if (n > m) swap(n, m);
        if (m - n == 0) return n == x || m == x;

        if ((m - x) % n == 0 && m >= x) return true;
        m -= n; 
    }
    return n == x || m == x;
}

int main() {
    fast_io;
    
    ll n, m, x; 
    
    cin >> n >> m >> x;
    if (solution(n, m, x)) {
        cout << "IYA\n";
    } else {
        cout << "TIDAK\n";
    }


    return 0;
}

