#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    
    // 현재 시(A), 분(B) 입력
    cin >> A >> B;
    // 소요 시간(C) 입력
    cin >> C;

    // 1. 현재 시각을 모두 '분'으로 변환한 뒤 소요 시간을 더합니다.
    int total_minutes = A * 60 + B + C;

    // 2. 다시 '시'를 구합니다. 
    // 전체 분을 60으로 나눈 몫이 시가 됩니다.
    // 하루는 24시간이므로 24로 나눈 나머지를 취해 0~23 범위를 유지합니다.
    int final_hour = (total_minutes / 60) % 24;

    // 3. 다시 '분'을 구합니다.
    // 전체 분을 60으로 나눈 나머지가 분이 됩니다.
    int final_minute = total_minutes % 60;

    // 결과 출력
    cout << final_hour << " " << final_minute << endl;

    return 0;
}