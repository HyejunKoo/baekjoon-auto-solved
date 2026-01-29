#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int time = 0;

    for (char c : s) {
        if (c <= 'C') time += 3;        // ABC
        else if (c <= 'F') time += 4;   // DEF
        else if (c <= 'I') time += 5;   // GHI
        else if (c <= 'L') time += 6;   // JKL
        else if (c <= 'O') time += 7;   // MNO
        else if (c <= 'S') time += 8;   // PQRS
        else if (c <= 'V') time += 9;   // TUV
        else time += 10;                // WXYZ
    }

    cout << time;
    return 0;
}
