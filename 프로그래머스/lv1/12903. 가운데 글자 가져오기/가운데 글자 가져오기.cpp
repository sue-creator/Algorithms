#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int sl = s.length();
    if (sl%2 == 1){
        answer += s[sl/2];
    }
    
    else{
       answer += s[sl/2 -1];
       answer += s[sl/2];
    }
    
    return answer;
}