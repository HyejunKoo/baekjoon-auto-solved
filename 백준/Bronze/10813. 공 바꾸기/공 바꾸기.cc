#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    // 1. 바구니 초기화 (1번부터 N번까지 순서대로 공 삽입)
    // 인덱스 편의를 위해 크기를 N+1로 설정합니다.
    vector<int> baskets(N + 1);
    for (int i = 1; i <= N; ++i) {
        baskets[i] = i;
    }

    // 2. M번의 공 교환 작업 수행
    for (int k = 0; k < M; ++k) {
        int i, j;
        cin >> i >> j;
        
        // i번 바구니와 j번 바구니의 공을 서로 바꿈
        swap(baskets[i], baskets[j]);
    }

    // 3. 결과 출력
    for (int i = 1; i <= N; ++i) {
        cout << baskets[i] << (i == N ? "" : " ");
    }

    return 0;
}