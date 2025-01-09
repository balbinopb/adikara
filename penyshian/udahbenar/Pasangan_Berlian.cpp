#include <bits/stdc++.h>

using namespace std;

//template
#define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(0)

//ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int solution(ll n, ll m, ll x) {
    while (n != m) {
        if (n == x || m == x){
            return true;
        }else if (n > m){
            n -= m;
        }else{
            m -= n;
        }
    }
    return n == x;
}

int main() {
    fast_io;
    
    ll n, m, x; 
    
    cin >> n >> m >> x;
    
    cout<<((solution(n, m, x))? "IYA" : "TIDAK")<<endl;


    return 0;
}

