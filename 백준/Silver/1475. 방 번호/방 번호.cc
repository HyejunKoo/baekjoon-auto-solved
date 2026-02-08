#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt[10] = {0};

    for (char c : s) {
        cnt[c - '0']++;
    }

    int sixNine = cnt[6] + cnt[9];
    cnt[6] = (sixNine + 1) / 2;
    cnt[9] = 0;

    int ans = 0;
    for (int i = 0; i < 10; i++) {
        ans = max(ans, cnt[i]);
    }

    cout << ans;
}