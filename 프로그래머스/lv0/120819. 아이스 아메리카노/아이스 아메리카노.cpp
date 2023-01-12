#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int q, r;
    q = money/5500;
    r = money - (5500*q);
    
    answer.push_back(q);
    answer.push_back(r);
    
    return answer;
}