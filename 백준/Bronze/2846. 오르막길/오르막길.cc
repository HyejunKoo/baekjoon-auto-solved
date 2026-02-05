#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> h(N);
    for (int i = 0; i < N; i++) cin >> h[i];

    int ans = 0;
    int start = h[0];

    for (int i = 1; i < N; i++) {
        if (h[i] > h[i - 1]) {
            // 오르막 계속
            ans = max(ans, h[i] - start);
        } else {
            // 오르막 종료 → 새 시작점
            start = h[i];
        }
    }

    cout << ans << "\n";
    return 0;
}