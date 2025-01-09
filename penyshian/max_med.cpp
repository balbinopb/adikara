#include <bits/stdc++.h>

using namespace std;

//template
#define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(0)

//ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

vector<ll> createArray(ll N, ll S) {
    vector<ll> result(N, 0);

    if (N == 0 || S < 0) {
        return result;
    }

    int baseValue = S / N;
    int remainder = S % N;

    fill(result.begin(), result.end(), baseValue);

    for (int i = 0; i < remainder; i++) {
        result[i]++;
    }

    return result;
}

int main() {
    fast_io;
    ll N, S;
    cin >> N;
    cin >> S;

    vector<ll> array = createArray(N, S);

    sort(array.begin(), array.end());

    cout<< array[N/2] <<endl;

    return 0;
}
