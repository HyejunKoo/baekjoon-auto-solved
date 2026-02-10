#include <iostream>
#include <algorithm> // max 함수 사용을 위해 포함

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        // 규칙 1: 같은 눈이 3개인 경우
        cout << 10000 + a * 1000 << endl;
    } 
    else if (a == b || a == c) {
        // 규칙 2: 같은 눈이 2개인 경우 (a가 중복인 경우)
        cout << 1000 + a * 100 << endl;
    } 
    else if (b == c) {
        // 규칙 2: 같은 눈이 2개인 경우 (b와 c가 같은 경우)
        cout << 1000 + b * 100 << endl;
    } 
    else {
        // 규칙 3: 모두 다른 눈인 경우
        int max_val = max({a, b, c}); // 세 수 중 가장 큰 값 찾기
        cout << max_val * 100 << endl;
    }

    return 0;
}