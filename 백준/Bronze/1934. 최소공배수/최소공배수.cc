#include <iostream>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        long long A, B;
        cin >> A >> B;

        cout << (A * B) / std::gcd(A, B) << "\n";
    }

}