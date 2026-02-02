#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    int a,b,c;
    int count = 0;
    
    for(int i=1; i<=N; i++){

            if(i<100){
                count++;
                continue;
            }
    else {
        a=i/100;
        b=(i/10)%10;
        c=i%10;
    }
        if(b-a == c-b){
            count++;
        }
    }
    cout << count;
    
    return 0;
}