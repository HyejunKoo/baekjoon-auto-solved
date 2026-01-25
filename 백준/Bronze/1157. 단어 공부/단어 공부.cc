#include <iostream>
#include <cctype>
using namespace std;
#include <string>

int main() {

    string word;
    int count[26] = {0};
    
    cin >> word; //처음에 입력받는 문자열

    for(char c : word){
        c = toupper(c);
        count [c - 'A']++;
    } // 전부 소문자 -> 대문자로 바꾸고 각 문자가 몇 개씩 있는지 세기

    int max = 0; //가장 큰 나온 횟수 저장
    int B=0; // 가장 큰 횟수 문자의 인덱스 저장
    
    for (int i=0; i<26; i++){
        if(count[i] > max){
            max = count[i];
            B = i;
        }
    }

    int C=0; //가장 큰 횟수 중 겹치는 횟수 있나 판단하기
    
    for(int i=0; i<26; i++){
        if (count[i] == max){
            C++;
        }
    }

   char result = char (65+B); //가장 큰 횟수 인덱스+65 - 아스키코드
    
    if (C==1){
        cout << result;
        return 0;

        }
    else 
    {
        cout << '?';
         }
return 0;

}