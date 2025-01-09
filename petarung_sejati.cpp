#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 1) {
    cout << arr[0] << endl;
    }else{
        sort(arr.begin(), arr.end());

        ll res = (arr[0] + arr[1]) / __gcd(arr[0], arr[1]);
        for (int i = 2; i < n; i++) {
        res = (res + arr[i]) / __gcd(res, arr[i]);
    }

    cout << res << endl;
    }


    return 0;
}
