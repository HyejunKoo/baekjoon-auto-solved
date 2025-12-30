#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int N;
vector<int> A;
int op[4]; // +, -, *, /
int maxVal = INT_MIN;
int minVal = INT_MAX;

void dfs(int idx, int current) {
    // idx: 현재 사용할 숫자의 인덱스
    if (idx == N) {
        maxVal = max(maxVal, current);
        minVal = min(minVal, current);
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (op[i] > 0) {
            op[i]--;
            int next = current;

            if (i == 0) next = current + A[idx];
            else if (i == 1) next = current - A[idx];
            else if (i == 2) next = current * A[idx];
            else if (i == 3) {
                if (current < 0)
                    next = - (abs(current) / A[idx]);
                else
                    next = current / A[idx];
            }

            dfs(idx + 1, next);
            op[i]++; // 되돌리기
        }
    }
}

int main() {
    cin >> N;
    A.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 4; i++) {
        cin >> op[i];
    }

    dfs(1, A[0]);

    cout << maxVal << '\n' << minVal;
    return 0;
}
