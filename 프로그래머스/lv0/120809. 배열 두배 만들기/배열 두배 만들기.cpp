#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    int tmp; vector<int> answer;
    
    while (!numbers.empty()){
        tmp = numbers.back();
        answer.push_back(tmp*2);
    
        numbers.pop_back();
    }
    
    reverse(answer.begin(), answer.end());    
    return answer;
}