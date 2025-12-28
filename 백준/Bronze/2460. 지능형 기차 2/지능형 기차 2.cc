#include <iostream>
using namespace std;

int main() {
    int cur = 0;
    int mx = 0;

    for (int i = 0; i < 10; i++) {
        int out, in;
        cin >> out >> in;

        cur -= out;
        cur += in;

        if (cur > mx)
            mx = cur;
    }

    cout << mx;
    return 0;
}
