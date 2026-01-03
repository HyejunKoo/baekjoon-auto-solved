#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> order(K);
    for (int i = 0; i < K; i++) {
        cin >> order[i];
    }

    vector<int> multitap;
    int unplugCount = 0;

    for (int i = 0; i < K; i++) {
        int device = order[i];

        // 이미 꽂혀 있으면 패스
        if (find(multitap.begin(), multitap.end(), device) != multitap.end()) {
            continue;
        }

        // 빈 자리 있으면 꽂기
        if ((int)multitap.size() < N) {
            multitap.push_back(device);
            continue;
        }

        // 뽑아야 하는 경우
        int targetIndex = -1;
        int farthest = -1;

        for (int j = 0; j < multitap.size(); j++) {
            int plugged = multitap[j];
            int nextUse = INT_MAX;

            // 다음 사용 시점 찾기
            for (int t = i + 1; t < K; t++) {
                if (order[t] == plugged) {
                    nextUse = t;
                    break;
                }
            }

            // 가장 늦게 쓰이거나 아예 안 쓰이는 것 선택
            if (nextUse > farthest) {
                farthest = nextUse;
                targetIndex = j;
            }
        }

        // 플러그 제거 후 새 기기 꽂기
        multitap[targetIndex] = device;
        unplugCount++;
    }

    cout << unplugCount << "\n";
    return 0;
}
