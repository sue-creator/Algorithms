#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int idx = 0; int maxval = 0;
    
    for (int i=0; i<array.size(); i++ ){
        if (maxval < array[i]){
            maxval = array[i];
            idx = i;
        }
        
    }
    answer.push_back(maxval);
    answer.push_back(idx);
    
    return answer;
}