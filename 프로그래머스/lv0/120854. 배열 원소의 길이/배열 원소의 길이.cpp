#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    int l2 = strlist.size();
    
    for(int i=0;i<l2;i++){
        answer.push_back(strlist[i].size());
    }
    return answer;
}