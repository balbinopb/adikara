#include <bits/stdc++.h>
using namespace std;

#define ll long long

string checkFight(ll x1, ll y1, ll x2, ll y2) {
    if (max(abs(x1 - x2), abs(y1 - y2)) == 1) {
        return "Waduh, akan terjadi baku hantam!";
    } else {
        return "Aman bos!";
    }
}

int main() {
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << checkFight(x1, y1, x2, y2) << endl;

    return 0;
}
