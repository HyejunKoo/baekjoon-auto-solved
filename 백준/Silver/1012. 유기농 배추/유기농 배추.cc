#include <iostream>
using namespace std;

#define MAX 50

int field[MAX][MAX];
bool visited[MAX][MAX];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int M,N,K;

void dfs(int x, int y){
    visited[y][x]=true;

    for(int i=0; i<4; i++){
        int nx=x+dx[i];
        int ny=y+dy[i];

        if(nx >= 0 && nx < M && ny >= 0 && ny < N){
            if(field[ny][nx] == 1 && !visited[ny][nx]){
                dfs(nx, ny);
            }
        }
    }
}

int main() {

    int T;
    cin >> T;

    while(T--){
        
    cin >> M >> N >> K;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            field[i][j]=0;
            visited[i][j]=false;
        }
    }

        for(int i=0; i<K; i++){
            int x,y;
            cin >> x >> y;
            field [y][x]=1;
        }

        int wormCount = 0;

        for(int y=0; y<N; y++){
            for(int x=0; x<M; x++){
                if (field[y][x]==1 && !visited[y][x]){
                    dfs(x,y);
                    wormCount++;
                }
            }
        }
        cout << wormCount << '\n';
    }
    return 0;
}