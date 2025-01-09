#include <bits/stdc++.h>
using namespace std;

//template
#define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(0)

// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll solution(ll n) {
    ll low = 0, high = n, res = 0;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll coin = mid * (mid + 1) / 2; 

        if (coin <= n) {
            res = mid; 
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }

    return res;
}

int main() {
    fast_io;
    
    ll n;
    cin >> n;
    cout << solution(n) << endl;


    return 0;
}

