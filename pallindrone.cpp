#include <bits/stdc++.h>
// #include <unordered_map>
using namespace std;

string longestPalindrome(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    string half = "", center = "";
    for (auto &[ch, count] : freq) {
        if (count % 2 == 0) {
            half += string(count / 2, ch); // Add half of even count
        } else {
            half += string(count / 2, ch); // Add half of odd count
            if (center.empty()) {
                center = ch; // Choose one odd character as the center
            }
        }
    }

    string reversedHalf = half;
    reverse(reversedHalf.begin(), reversedHalf.end());
    return half + center + reversedHalf;
}

int main() {
    string str;
    cin >> str;

    cout << longestPalindrome(str) << endl;
    return 0;
}
