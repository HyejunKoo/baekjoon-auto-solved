#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A[9];
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> A[i];
        sum += A[i];
    }

    // 두 명을 제외할 조합 찾기
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - A[i] - A[j] == 100) {
                // 제외할 두 명을 0으로 표시
                A[i] = A[j] = 0;
                goto found;
            }
        }
    }

found:
    sort(A, A + 9);

    // 0 제외하고 출력
    for (int i = 0; i < 9; i++) {
        if (A[i] != 0)
            cout << A[i] << "\n";
    }

    return 0;
}
