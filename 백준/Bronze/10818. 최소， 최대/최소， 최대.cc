#include <iostream>
using namespace std;

int main(){
    int N,I;
    int B=-100000000;
    int S=100000000;
    int cnt = 0;

    cin >> N;
    
    for (int i=0; i<N; i++){
        cin >> I;
    
        if (I<S){
            S=I;
        } 
        if (I > B){
            B=I;
        }
    }
    cout << S << " " << B;
    return 0;
}