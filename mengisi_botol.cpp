#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n,x,k;
    
    cin >> n >> x >> k;
    
    cout<<(((k/x)<n)? k/x : n)<<endl;

   
    return 0;
}
