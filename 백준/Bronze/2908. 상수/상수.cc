#include <iostream>
using namespace std;
#include <string>
#include <algorithm>

int main(){
    string A, B;
    cin >> A >> B;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    if(A>B) cout << A;
    else cout << B;

    return 0;

        
}