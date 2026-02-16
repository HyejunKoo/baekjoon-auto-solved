#include <iostream>
#include <vector>
using namespace std;

/*
  백준 2606 바이러스 (그래프 탐색)
  - 컴퓨터(정점) 1번에서 시작해서 연결된 모든 컴퓨터를 방문(감염)한다.
  - 1번을 제외하고 감염된 컴퓨터 수를 출력한다.

  구현 방식
  1) 인접 리스트로 그래프 저장: graph[i] = i번 컴퓨터와 직접 연결된 컴퓨터 목록
  2) visited 배열로 방문(감염) 여부 관리
  3) DFS(깊이 우선 탐색)로 1번에서 도달 가능한 모든 정점을 방문
  4) 새로 방문하는 컴퓨터(1번 제외)를 셀 때마다 cnt 증가
*/

// graph[컴퓨터번호] = 연결된 컴퓨터 목록을 저장하는 인접 리스트
// 문제에서 컴퓨터 수가 최대 100이므로 101 크기로 잡는다(1~100 사용).
vector<int> graph[101];

// visited[i] = i번 컴퓨터를 이미 방문(감염 처리)했는지 여부
bool visited[101];

// 1번 컴퓨터를 통해 감염되는 컴퓨터 수(1번 제외)
int cnt = 0;

/*
  DFS 함수: 현재 node에서 출발해서 갈 수 있는 모든 컴퓨터를 방문한다.
  - node: 현재 방문할 컴퓨터 번호
*/
void dfs(int node) {
    // 현재 컴퓨터를 방문(감염 처리)했다고 표시
    visited[node] = true;

    // node와 직접 연결된 모든 컴퓨터(next)를 확인한다.
    for (int i = 0; i < (int)graph[node].size(); i++) {
        int next = graph[node][i];  // node와 연결된 다음 컴퓨터

        // 아직 방문하지 않은 컴퓨터면
        if (!visited[next]) {
            // next는 1번으로부터 새로 감염되는 컴퓨터이므로 카운트 증가
            cnt++;

            // next 컴퓨터로 DFS를 이어서 진행 (next와 연결된 컴퓨터들도 전부 감염)
            dfs(next);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; // 컴퓨터 수
    int m; // 직접 연결된 컴퓨터 쌍(간선) 수

    cin >> n;
    cin >> m;

    // m개의 연결 정보를 입력받는다.
    // 웜 전파는 "양방향 연결"로 생각하면 된다.
    // 즉, a-b가 연결이면 a에서 b로도, b에서 a로도 이동 가능하다.
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        // a와 b가 연결되어 있으니 인접 리스트에 서로 추가한다.
        // push_back(x): vector의 맨 뒤에 x를 추가한다.
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // 1번 컴퓨터에서 시작해서 연결된 모든 컴퓨터를 DFS로 방문한다.
    // cnt는 "1번을 제외하고" 새로 방문하는 컴퓨터를 셀 것이므로
    // dfs(1) 호출 자체로는 cnt를 올리지 않는다.
    dfs(1);

    // 결과 출력: 1번을 통해 감염된 컴퓨터 수(1번 제외)
    cout << cnt << "\n";
 
    return 0;
}