#include <bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin >> N;

    string strN = to_string(N);

    vector<char> digits(strN.begin(), strN.end());

    sort(digits.rbegin(), digits.rend());

    int evenIndex = -1;
    for (int i = digits.size() - 1; i >= 0; --i) {
        if ((digits[i] - '0') % 2 == 0) {
            evenIndex = i;
            break;
        }
    }

    if (evenIndex == -1) {
        cout << "Mustahil! o_o" << endl;
        
    }else{
        swap(digits[evenIndex], digits[digits.size() - 1]);

        string result(digits.begin(), digits.end());

        cout << result << endl;
    }

    

    return 0;
}
