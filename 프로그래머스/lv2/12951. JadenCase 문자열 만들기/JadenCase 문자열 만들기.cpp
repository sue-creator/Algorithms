#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    answer += toupper(s[0]);
    string chk = " ";
    
    for(int i=1 ; i<s.length(); i++){
        string tmp = "";
        tmp += s[i-1];
        
        if (tmp.compare(chk) == 0){
            answer += toupper(s[i]);}
        else {
           answer += tolower(s[i]);}
    }
    
    return answer;
}
