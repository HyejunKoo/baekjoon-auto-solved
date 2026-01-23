#include <iostream>
using namespace std;

int digitSum(int x){
    int sum=0;
    while (x>0){
      sum += x % 10;
      x/=10;
    }
    return sum;
}

int main(){
    int N;
    cin >> N;
    
    int digits = to_string(N).length();
    
    int start = N - 9*digits;
    if(start<1) start = 1;
    
    for(int i=start; i<N; i++){
        int sum = i+digitSum(i);
        if (sum == N){
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
    
   
}