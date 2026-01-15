#include <iostream>
#include <climits>
using namespace std;

int N;
int A[11];
int op[4]; // +, -, *, /
int maxVal = INT_MIN;
int minVal = INT_MAX;

void dfs(int idx, int current) {
    // 숫자 N개를 다 사용한 경우
    if (idx == N) {
        if (current > maxVal) maxVal = current;
        if (current < minVal) minVal = current;
        return;
    }

    // 연산자 4개 중 선택
    for (int i = 0; i < 4; i++) {
        if (op[i] > 0) {
            op[i]--;  // 연산자 하나 사용

            int next;
            if (i == 0) next = current + A[idx];
            else if (i == 1) next = current - A[idx];
            else if (i == 2) next = current * A[idx];
            else if (i == 3) next = current / A[idx]; // C++14 기준 자동 처리

            dfs(idx + 1, next);

            op[i]++;  // 백트래킹
        }
    }
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 4; i++) {
        cin >> op[i];
    }

    dfs(1, A[0]);

    cout << maxVal << '\n';
    cout << minVal << '\n';

    return 0;
}
