#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[101];
bool visited[101];
int cnt=0;

//DFS함수: 현재 node에서 출발해서 갈 수 있는 모든 컴퓨터 방문
//-node: 현재 방문할 컴퓨터 번호

void dfs(int node){
    visited[node]=true;

    for(int i=0; i<(int)graph[node].size(); i++){
        int next=graph[node][i];

        if(!visited[next]){
            cnt++;
            dfs(next);
        }
    }
}

int main() {
    int n,m;
    
    cin >> n; 
    cin >> m;

    for(int i=0; i<m; i++){
     int a,b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);

    cout << cnt << '\n';
    return 0;
}