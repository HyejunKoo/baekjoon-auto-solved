#include <iostream>
using namespace std;

//유클리드 호제법을 이용한 최대공약수 함수
//a,b의 최대공약수를 반환한다.
long long gcd(long long a, long long b){ 
     while (b!=0){
         long long r=a%b;
         a=b;
         b=r;
     }
    return a;
}


int main(){

    long long A,B;
    cin >> A >> B;


    long long cnt = gcd(A,B);

    for(long long i=0; i<cnt; i++){
        cout << '1' ;
    }
    return 0;
}