#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;
    int result = 0;
    int temp = 1;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (c == '(') {
            st.push(c);
            temp *= 2;
        }
        else if (c == '[') {
            st.push(c);
            temp *= 3;
        }
        else if (c == ')') {
            if (st.empty() || st.top() != '(') {
                cout << 0;
                return 0;
            }
            if (s[i - 1] == '(') {
                result += temp;
            }
            st.pop();
            temp /= 2;
        }
        else if (c == ']') {
            if (st.empty() || st.top() != '[') {
                cout << 0;
                return 0;
            }
            if (s[i - 1] == '[') {
                result += temp;
            }
            st.pop();
            temp /= 3;
        }
    }

    if (!st.empty()) {
        cout << 0;
        return 0;
    }

    cout << result;
    return 0;
}
