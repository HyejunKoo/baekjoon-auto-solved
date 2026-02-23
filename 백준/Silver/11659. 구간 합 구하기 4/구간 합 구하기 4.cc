#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N,M;
    cin >> N >> M;
    
    vector<int> A(N+1,0);
    vector<int> prefix(N+1,0);
    
    for(int i=1; i<=N; i++){
        cin >> A[i];
        prefix[i]=prefix[i-1]+A[i];
    }
    
    for(int k=0; k<M; k++){
        int i,j;
        cin >> i >> j;
        cout << prefix[j]-prefix[i-1]<<'\n';
        }
    return 0;
    
}