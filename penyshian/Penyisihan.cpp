#include <bits/stdc++.h>

using namespace std;

//template
#define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(0)

//ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }


int main() {
    int n, k;
    cin >> n >> k; 

    vector<vector<int>> arr(n, vector<int>(k));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> arr[i][j]; 
        }    
    }

    vector<int> columnSums(k, 0);

    for (int j = 0; j < k; j++) {
        for (int i = 0; i < n; i++) {
            columnSums[j] += arr[i][j];
        }
    }

    for (int j = 0; j < k; j++) {
        if(columnSums[j]>n/2){
            cout<<"TIDAK"<<endl;
            return 0;
        }
    }
    cout<<"YA"<<endl;

    return 0;
}
