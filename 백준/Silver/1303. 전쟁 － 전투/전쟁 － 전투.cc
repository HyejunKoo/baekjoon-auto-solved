#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> field;
bool visited[100][100];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int dfs(int x, int y, char color) {
    visited[x][y] = true;
    int count = 1;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
        if (visited[nx][ny]) continue;
        if (field[nx][ny] != color) continue;

        count += dfs(nx, ny, color);
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    field.resize(M);

    for (int i = 0; i < M; i++) {
        cin >> field[i];
    }

    int whitePower = 0;
    int bluePower = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j]) {
                int groupSize = dfs(i, j, field[i][j]);
                if (field[i][j] == 'W') {
                    whitePower += groupSize * groupSize;
                } else {
                    bluePower += groupSize * groupSize;
                }
            }
        }
    }

    cout << whitePower << " " << bluePower;
    return 0;
}
