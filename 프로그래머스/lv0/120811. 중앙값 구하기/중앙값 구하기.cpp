#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int l = array.size();
    sort(array.begin(), array.end());
    
    answer = array[l/2];
    return answer;
}