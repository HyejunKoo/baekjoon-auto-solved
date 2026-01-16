#include <iostream>
using namespace std;

int main(){
    
    while(true){
        int n;
        cin >> n;
        if (n==-1) break;
        
        int sum=0;
        
        for(int i=1; i<n; i++){
            if(n%i==0){
                sum+=i;
            }
        }
        
        if(sum==n){
            cout<< n << " = ";
            bool first=true;
            
            for(int i=1; i<n; i++){
                if(n%i==0){
                    if(!first) cout<<" + ";
                    cout << i;
                    first = false;
                    
                }
            }
            cout << '\n';
        }else{
            cout << n << " is NOT perfect. \n";
        }
    }
    return 0;
}