#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int A[50][2];
    int rank[50]={0};
    
    for(int i=0; i<N; i++){
             cin >> A[i][0] >> A[i][1];
}
        
    for (int k=0; k<N; k++){    
        for(int i=0; i<N; i++){
            if(A[k][0] < A[i][0] && A[k][1] < A[i][1]){
                rank[k]++;
            }     
              
               }
               }
    
    for(int i=0; i<N; i++){
        cout << rank[i]+1 << '\n';
    }
    return 0;
}