#include <iostream>
#include <vector>
using namespace std;

vector<int> maximize_score(int n) {
    vector<int> result;
    int value = 0;

    // Generate the array with alternating positive and negative values
    while (result.size() < n) {
        result.push_back(value);  // Add positive or zero value
        if (result.size() < n) {
            result.push_back(-value);  // Add negative value
        }
        value++;  // Increment value for next pair
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    // Generate and print the solution
    vector<int> solution = maximize_score(n);
    for (int x : solution) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
