#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> adj[10001];
int population[10001];
long long dp[10001][2];
bool visited[10001];

void dfs(int u) {
    visited[u] = true;
    dp[u][1] = population[u];
    dp[u][0] = 0;

    for (int v : adj[u]) {
        if (visited[v]) continue;
        dfs(v);

        dp[u][1] += dp[v][0];
        dp[u][0] += max(dp[v][0], dp[v][1]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> population[i];
    }

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);
    cout << max(dp[1][0], dp[1][1]) << "\n";
    return 0;
}
