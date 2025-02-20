#include <bits/stdc++.h>
using namespace std;

#define u_map unordered_map
#define vec vector
#define pb push_back
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool isValidOrder(int N, const vec<pair<int, int>>& relations) {
    u_map<int, vec<int>> adj; // Adjacency list
    u_map<int, int> inDegree; // In-degree of nodes

    // Build the graph and in-degree map
    for (const auto& rel : relations) {
        int A = rel.first;
        int B = rel.second;
        adj[B].pb(A);
        inDegree[A]++;
        // Ensure all nodes are accounted for in the in-degree map
        if (inDegree.find(B) == inDegree.end()) {
            inDegree[B] = 0;
        }
    }

    // Initialize the queue with nodes having 0 in-degree
    queue<int> q;
    for (const auto& [node, degree] : inDegree) {
        if (degree == 0) {
            q.push(node);
        }
    }

    int count = 0; // Count of processed nodes
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        count++;

        for (int neighbor : adj[current]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // If all nodes are processed, the order is valid
    return count == inDegree.size();
}

int main() {
    fast_io; 

    int N;
    cin >> N;

    vec<pair<int, int>> relations(N);
    for (int i = 0; i < N; i++) {
        int A, B;
        char gt;
        cin >> A >> gt >> B;
        relations[i] = {A, B};
    }

    if (isValidOrder(N, relations)) {
        cout << "YA\n";
    } else {
        cout << "TIDAK\n";
    }

    return 0;
}
