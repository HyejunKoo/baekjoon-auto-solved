#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    int cnt[10] = {0};

    for (char c : n) {
        cnt[c - '0']++;
    }

    int sixNine = cnt[6] + cnt[9];
    cnt[6] = (sixNine + 1) / 2;  // 올림 처리
    cnt[9] = 0;                  // 9는 더 이상 따로 안 씀

    int ans = 0;
    for (int i = 0; i < 10; i++) {
        ans = max(ans, cnt[i]);
    }

    cout << ans << "\n";
    return 0;
}
