#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    int y = dot.back(); dot.pop_back();
    
    int x = dot.back(); dot.pop_back();
    
    if (x > 0 && y > 0){
        return 1;
    }
    else if (x > 0 && y < 0){
        return 4;
    }
    else if (x < 0 && y > 0){
        return 2;
    }
    else if (x < 0 && y < 0){
        return 3;
    }

}