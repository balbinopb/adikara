#include <bits/stdc++.h>

using namespace std;

//template
#define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(0)
#define pairr pair<ll, ll>

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
//int  gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

pairr solution(ll x1, ll y1) {
    ll res = gcd(abs(x1), abs(y1));
    x1 /= res;
    y1 /= res;

    if (x1 < 0 || (x1 == 0 && y1 < 0)) {
        x1 = -x1;
        y1 = -y1;
    }

    return {y1, x1};
}

int main() {
    fast_io;

    int n;
    ll x0, y0, x, y;
    cin >> n >> x0 >> y0;

    set<pairr> directions;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        ll dx = x - x0, dy = y - y0;
        directions.insert(solution(dx, dy));
    }

    cout << directions.size() << endl;

    return 0;
}
