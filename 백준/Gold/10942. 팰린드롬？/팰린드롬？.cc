#include <iostream>
using namespace std;

int N;
int arr[2001];
bool dp[2001][2001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }

    // 길이 1
    for (int i = 1; i <= N; i++) {
        dp[i][i] = true;
    }

    // 길이 2
    for (int i = 1; i < N; i++) {
        if (arr[i] == arr[i + 1]) {
            dp[i][i + 1] = true;
        }
    }

    // 길이 3 이상
    for (int len = 3; len <= N; len++) {
        for (int i = 1; i + len - 1 <= N; i++) {
            int j = i + len - 1;
            if (arr[i] == arr[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
            }
        }
    }

    int M;
    cin >> M;
    while (M--) {
        int S, E;
        cin >> S >> E;
        cout << dp[S][E] << '\n';
    }

    return 0;
}
