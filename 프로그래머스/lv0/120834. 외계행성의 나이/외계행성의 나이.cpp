#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string s = to_string(age);
    int l = s.size();
    
    for (int i=0; i<l; i++){
        answer += tolower(s[i]+17);
    }
    
    
    return answer;
}