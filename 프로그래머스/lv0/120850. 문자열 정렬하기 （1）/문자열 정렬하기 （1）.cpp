#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    int l = my_string.size();
    
    for(int i=0; i<l; i++){
        if (my_string[i] > 47 && my_string[i] < 58){
            answer.push_back(my_string[i]-48);
        }
        else continue;
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}