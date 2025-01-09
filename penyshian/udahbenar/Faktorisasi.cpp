#include <bits/stdc++.h>
using namespace std;

//template
#define ll long long
#define pb push_back
// #define all(v) (v).begin(), (v).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(0)

// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

void Factorizaton(ll n,vector<ll> &fac) {
    for (ll i = 2; i*i <= n; ++i) {
        while (n % i == 0) {
            fac.pb(i);
            n /= i;
        }
    }
    if (n > 1) {
        fac.pb(n);
    }
}

int main() {
    fast_io;

    ll n;
    cin >> n;

    vector<ll> fac;
    Factorizaton(n ,fac);

    for (ll i = 0; i < fac.size(); ++i) {
        cout << fac[i];
        if (i != fac.size()-1) {
            cout << " x ";
        }
    }

    return 0;
}

