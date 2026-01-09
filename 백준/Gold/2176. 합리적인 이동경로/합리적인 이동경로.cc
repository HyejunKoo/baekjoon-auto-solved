#include <bits/stdc++.h>
using namespace std;

static const long long INF = 1e18;

int N, M;
vector<pair<int,int>> adj[1001];
long long dist[1001];
int dp[1001];

void dijkstra(int start) {
    priority_queue<pair<long long,int>,
        vector<pair<long long,int>>,
        greater<pair<long long,int>>> pq;

    fill(dist, dist + N + 1, INF);
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [cost, u] = pq.top();
        pq.pop();

        if (cost > dist[u]) continue;

        for (auto [v, w] : adj[u]) {
            if (dist[v] > cost + w) {
                dist[v] = cost + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int dfs(int u) {
    if (u == 2) return 1;
    if (dp[u] != -1) return dp[u];

    int cnt = 0;
    for (auto [v, w] : adj[u]) {
        if (dist[v] < dist[u]) {
            cnt += dfs(v);
        }
    }
    return dp[u] = cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        adj[A].push_back({B, C});
        adj[B].push_back({A, C});
    }

    dijkstra(2);
    memset(dp, -1, sizeof(dp));

    cout << dfs(1) << '\n';
    return 0;
}
