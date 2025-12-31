#include <iostream>
using namespace std;

int main(){
    
    int cur = 0;
    int I, O;
    int mx = 0;
    
    for(int i=0; i<10; i++){
        cin >> O >> I;
        cur+=I;
        cur-=O;
        if(mx < cur){
            mx = cur;
        }
    }
    cout << mx;
    return 0;
}