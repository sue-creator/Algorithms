#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int l = phone_number.length();
    //cout << l;
    
    for (int i=1; i<l-3 ;i++){
        answer+= "*";
    }
    for (int i=l-4; i<l ; i++){
        answer += phone_number[i];
    }
    return answer;
}