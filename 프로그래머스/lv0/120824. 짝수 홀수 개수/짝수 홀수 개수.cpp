#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int e = 0; int o = 0;
    
    
    while(!num_list.empty()){
        if ((num_list.back()%2) == 1){
            num_list.pop_back();
            o++;
        }
        else {
            num_list.pop_back();
            e++;
        }
    }
    
    answer.push_back(e);
    answer.push_back(o);
    
    return answer;
}