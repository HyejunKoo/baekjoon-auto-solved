#include <iostream>
using namespace std;

int main(){
    
    int A[9][9];
    int B=0;
    int C=0;
    int D=0;
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> A[i][j];
            if(B<A[i][j]){
                B=A[i][j];
                C=i;
                D=j;
            }
        }
    }
    
    cout << B << '\n' << C+1 << " " << D+1;
    return 0;
    
}