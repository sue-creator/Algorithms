#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    
    if (arr.size()==1) return {-1};
    arr.erase(min_element(arr.begin(), arr.end()));
    
    vector<int> answer;
    answer = arr;
    
    
    
    return answer;
}