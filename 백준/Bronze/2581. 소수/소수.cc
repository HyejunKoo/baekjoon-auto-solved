#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int M, N;
    cin >> M >> N;

    int sum = 0;
    int minPrime = -1;

    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            sum += i;
            if (minPrime == -1) {
                minPrime = i;
            }
        }
    }

    if (sum == 0) {
        cout << -1;
    } else {
        cout << sum << '\n' << minPrime;
    }

    return 0;
}
