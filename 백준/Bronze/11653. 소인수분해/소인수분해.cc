#include <iostream>

using namespace std;

int main() {
    // 입출력 속도를 높이기 위한 설정 (SRE식 성능 최적화)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // n이 1인 경우 아무것도 출력하지 않음
    if (n == 1) return 0;

    // 2부터 n의 제곱근까지 나누어 떨어지는지 확인
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << "\n";
            n /= i;
        }
    }

    // 제곱근까지 나눈 후 남은 n이 1보다 크면 그 수도 소수이므로 출력
    if (n > 1) {
        cout << n << "\n";
    }

    return 0;
}