#include <iostream>
using namespace std;

int main(){
    int count=0;
    int I;
    int R;
    int check[42]={0};
    
    for(int i=0; i<10; i++){
        cin >> I;
        R = I % 42; 
        if (check[R]==0){
            count++;
            check[R]=1;
        }
    }
    
       cout << count;     
       return 0;
        }
    
        
    
    
