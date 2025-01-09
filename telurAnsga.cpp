#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, Q; 
    cin >> N >> Q;

    map<string, int> telur; //map

    for (int i = 0; i < N; i++) {
        string nama_angsa;
        cin >> nama_angsa;
        telur[nama_angsa] = 0;
    }

    for (int i = 0; i < Q; i++) {
        string nama_angsa;
        cin >> nama_angsa;
        telur[nama_angsa]++;
    }

    for (auto& entry : telur) {
        cout << entry.first << " " << entry.second << endl;
    }

    return 0;
}
