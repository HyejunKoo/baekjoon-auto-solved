#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> coin(n);
    for (int i = 0; i < n; i++) cin >> coin[i];

    vector<long long> dp(k + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < n; i++) {
        int c = coin[i];
        if (c > k) continue;

        for (int sum = c; sum <= k; sum++) {
            dp[sum] += dp[sum - c];
        }
    }

    cout << dp[k] << "\n";
    return 0;
}
