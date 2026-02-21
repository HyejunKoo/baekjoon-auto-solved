#include <iostream>
#include <vector>

using namespace std;

int N,M;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int cur){
    visited[cur]=true;

    for(int i=0; i<adj[cur].size(); i++){
        int next=adj[cur][i];

        if(!visited[next]){
            dfs(next);
        }
    }
}

int main() {
    
    cin >> N >> M;
    
    adj.resize(N+1);
    visited.resize(N+1, false);

    
   

    for (int i=0; i<M; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int componentCount=0;

    for(int i=1; i<=N; i++){
        if(!visited[i]){
            componentCount++;
            dfs(i);
        }
    }
    cout << componentCount << endl;
    return 0;
}