#include <bits/stdc++.h>
using namespace std;

#define vec vector
#define ll long long
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main() {
    fast_io;
    int N;
    ll X;
    cin >> N >> X;
    
    vec<ll> A(N + 1, 0);  // A[0] = 0, A[i] adalah prefix sum
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
        A[i] += A[i - 1];  // Membuat prefix sum
    }
    
    ll min_diff = LLONG_MAX;
    int L = -1, R = -1;
    
    int left = 0;
    for (int right = 1; right <= N; ++right) {
        while (left < right && A[right] - A[left] > X) {
            left++;
        }
        
        // Cek apakah rentang ini lebih mendekati X
        ll diff = abs(A[right] - A[left] - X);
        if (diff < min_diff) {
            min_diff = diff;
            L = left + 1;
            R = right;
        } else if (diff == min_diff) {
            if (left + 1 < L || (left + 1 == L && right < R)) {
                L = left + 1;
                R = right;
            }
        }
    }

    cout << L << " " << R << endl;
    return 0;
}
