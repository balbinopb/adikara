#include <iostream>
using namespace std;

int N, M;

struct Q {
    int x;
    int y;
};

struct sight {
    int a;
    int b;
};

int main() {
    sight vision;
    char isi;
    cin >> N >> M >> vision.a >> vision.b;
    char grid[N][M];
    
    // Input the grid
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }

    Q position;
    int nQuery;
    cin >> nQuery;

    for (int query = 0; query < nQuery; query++) {
        cin >> position.x >> position.y;
        position.x--; // Convert to zero-based indexing
        position.y--;

        if (grid[position.x][position.y] == 'x') {
            cout << "RIP Andrew :(" << endl;
        } else {
            int mines = 0;

            // Horizontal 
            int leftbound = max(0, position.y - vision.a);
            int rightbound = min(M - 1, position.y + vision.a);
            for (int k = leftbound; k <= rightbound; k++) {
                if (grid[position.x][k] == 'x') {
                    mines++;
                }
            }

            // Vertical 
            int upperbound = min(N - 1, position.x + vision.b);
            int lowerbound = max(0, position.x - vision.b);
            for (int l = lowerbound; l <= upperbound; l++) {
                if (grid[l][position.y] == 'x') {
                    mines++;
                }
            }

            // Avoid double counting Andrew's position
            if (grid[position.x][position.y] == 'x') {
                mines--;
            }

            cout << mines << endl;
        }
    }

    return 0;
}
