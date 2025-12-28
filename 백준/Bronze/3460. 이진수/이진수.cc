#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int pos = 0;
        while (n > 0) {
            if (n % 2 == 1) {
                cout << pos << " ";
            }
            n /= 2;
            pos++;
        }
        cout << "\n";
    }
    return 0;
}
