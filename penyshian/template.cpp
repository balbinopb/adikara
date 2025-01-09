// C++ Template for Competitive Programming by Balbino 
#include <bits/stdc++.h>

using namespace std;

// Macros tmplate
#define ll long long
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
#define pairr pair<int, int>

// Debugging
#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << " = " << x << endl
#else
    #define debug(x)
#endif

// Utility Functions
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll mod_add(ll a, ll b, ll m ) { return (a + b) % m; } //(a+b) mod m
ll mod_mul(ll a, ll b, ll m ) { return (a * b) % m; } //(a*b) mod m
ll mod_sub(ll a, ll b, ll m ) { return (a - b + m) % m; } //(a−b+m) mod m
ll mod_pow(ll a, ll b, ll m ) { //a^b mod m
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

// Factorization
vector<pairr> prime_factorization(ll n) {
    vector<pairr> factors;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            factors.pb({i, count});
        }
    }
    if (n > 1) {
        factors.pb({n, 1});
    }
    return factors;
}

// Directions
int dx[4] = {0, 0, -1, 1}; // N, S, W, E
int dy[4] = {1, -1, 0, 0};





int main() {
    fast_io;
    
    int t;
    cin >> t; 
    

    return 0;
}
