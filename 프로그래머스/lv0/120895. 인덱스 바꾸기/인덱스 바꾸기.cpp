#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    
    answer += my_string.substr(0, num1);
    answer += my_string[num2];
    answer += my_string.substr(num1+1, num2-num1-1);
    answer += my_string[num1];
    answer += my_string.substr(num2+1, my_string.size()-num2);
    
    return answer;
}