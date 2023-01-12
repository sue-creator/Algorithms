#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    int l = 0;
    l = my_string.length();
    string answer = "";
    
    for(int i=l-1; i>-1; i--){
        answer += my_string[i];
    }
    
    return answer;
}