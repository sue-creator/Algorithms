#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer= 0 ;
    
    while(!array.empty()){
        if (array.back() == n){
            answer += 1;
            array.pop_back();
        }
        else array.pop_back();
    }
    
    return answer;
}