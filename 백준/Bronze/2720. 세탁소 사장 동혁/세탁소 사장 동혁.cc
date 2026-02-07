#include <iostream>

using namespace std;

void solve() {
    int C;
    cin >> C;

    // 각 동전의 가치 (센트 단위)
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;

    // 1. 쿼터($0.25) 개수 계산
    cout << C / quarter << " ";
    C %= quarter;

    // 2. 다임($0.10) 개수 계산
    cout << C / dime << " ";
    C %= dime;

    // 3. 니켈($0.05) 개수 계산
    cout << C / nickel << " ";
    C %= nickel;

    // 4. 페니($0.01) 개수 계산
    cout << C / penny << "\n";
}

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}