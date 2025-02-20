#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// Directions for adjacency (8 neighbors)
const int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

// Check if a cell is within the grid bounds
bool isValid(int x, int y) {
    return x >= 0 && x < 3 && y >= 0 && y < 3;
}

// DFS to find all possible words of length 3
void findWords(vector<string>& grid, string& current, vector<vector<bool>>& visited, int x, int y, set<string>& results) {
    if (current.size() == 3) {
        results.insert(current);
        return;
    }

    visited[x][y] = true; // Mark the current cell as visited

    for (int d = 0; d < 8; ++d) { // Explore all neighbors
        int nx = x + dx[d];
        int ny = y + dy[d];
        if (isValid(nx, ny) && !visited[nx][ny]) {
            current.push_back(grid[nx][ny]);
            findWords(grid, current, visited, nx, ny, results);
            current.pop_back();
        }
    }

    visited[x][y] = false; // Backtrack
}

int main() {
    fast_io;

    vector<string> grid(3);
    for (int i = 0; i < 3; ++i) {
        cin >> grid[i];
    }

    set<string> results; // Use a set to store unique words
    string current;
    vector<vector<bool>> visited(3, vector<bool>(3, false));

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            current.push_back(grid[i][j]);
            findWords(grid, current, visited, i, j, results);
            current.pop_back();
        }
    }

    cout << *results.begin() << endl; // The smallest word is the first in the sorted set

    return 0;
}
