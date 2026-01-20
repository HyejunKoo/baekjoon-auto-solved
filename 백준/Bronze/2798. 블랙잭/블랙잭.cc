#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int A[100];
    
    
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    
    int T=0;
    
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            for(int k=j+1; k<N; k++){
                if(A[i]+A[j]+A[k]<=M){
                    if(A[i]+A[j]+A[k]>T){
                       T=A[i]+A[j]+A[k];
                    }
                }
            }
        }
}
    cout << T;
    return 0;
}