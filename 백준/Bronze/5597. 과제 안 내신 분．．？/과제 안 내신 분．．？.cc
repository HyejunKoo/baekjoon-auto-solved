#include <iostream>

using namespace std;

int main() {
    // 1번부터 30번까지 체크하기 위해 크기가 31인 배열 생성 (0번 인덱스 제외)
    bool submitted[31] = { false };
    int studentNum;

    // 28명의 출석번호를 입력받아 해당 인덱스를 true로 변경
    for (int i = 0; i < 28; i++) {
        cin >> studentNum;
        submitted[studentNum] = true;
    }

    // 1번부터 30번까지 확인하며 false인 번호(제출 안 한 사람) 출력
    for (int i = 1; i <= 30; i++) {
        if (!submitted[i]) {
            cout << i << "\n";
        }
    }

    return 0;
}