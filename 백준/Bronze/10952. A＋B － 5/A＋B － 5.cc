#include <iostream>

using namespace std;

int main() {
    // 입출력 속도 향상을 위한 설정 (선택 사항이나 권장됨)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;

    // 무한 루프를 돌며 입력을 받음
    while (true) {
        cin >> A >> B;

        // 입력의 마지막인 0 0 이 들어오면 반복문 탈출
        if (A == 0 && B == 0) {
            break;
        }

        // 결과 출력 (endl 대신 \n을 쓰는 것이 속도 면에서 유리함)
        cout << A + B << "\n";
    }

    return 0;
}