#include <iostream>
using namespace std;

// x의 각 자리수 합을 구하는 함수
int digitSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    // N의 자릿수 계산
    int digits = 0;
    int temp = N;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // 생성자 후보의 시작점: N - 9*자릿수 (음수면 1부터)
    int start = N - 9 * digits;
    if (start < 1) start = 1;

    // start부터 N까지 돌면서 가장 작은 생성자 찾기
    for (int m = start; m <= N; m++) {
        int val = m + digitSum(m);
        if (val == N) {
            cout << m << "\n";
            return 0;
        }
    }

    // 생성자가 없으면 0
    cout << 0 << "\n";
    return 0;
}
