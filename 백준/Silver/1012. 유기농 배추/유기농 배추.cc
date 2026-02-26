#include <iostream>
#include <vector>
using namespace std;

int M, N, K; //가로길이, 세로길이, 배추 심어져있는 위치 개수
int field[50][50];
bool visited[50][50];

//상하좌우 이동을 위한 방향 벡터
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};


void dfs(int x, int y){
    visited[y][x] = true; // 배열은 field[행][열] 로 선언했고, 2차원 배열에서는 세로, 가로 로 진행되기 때문에 바꿔줘야함

    for(int i=0; i<4; i++){ //현재 위치에서 한 칸 이동한 좌표 만드는 코드
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >=0 && nx < M && ny >=0 && ny < N) {// 배열 밖으로 나갔는지 확인. 범위 밖이면 그 방향은 그냥 무시하고 dfs 안 가고 다음 방향 탐색
            // 범위 안이면 그 다음 조건 검사(배추인지, 방문했는지), 맞으면 dfs 진행 
            if(field[ny][nx] == 1 && !visited[ny][nx]){
                dfs(nx,ny);
            }
    }
}
}

int main(){
    int T;
    cin >> T;

    while(T--){
        cin >> M >> N >> K;

        //배열 초기화
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                field[i][j]=0;
                visited[i][j]=false;
                
            }
        }
        for(int i=0; i<K; i++){
            int x,y;
            cin >> x >> y;
            field[y][x]=1;
        }
        int count = 0;

        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(field[i][j]==1 && !visited[i][j]){
                    dfs(j,i);
                count++;
                }
                }
            }
        cout << count << '\n';
        }
    return 0;
    }

