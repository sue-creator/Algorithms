#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int bunja = numer1*denom2 + numer2*denom1;
    int bunmo = denom1*denom2;
    int g = 1;
    
    for(int i = 1 ; i <= bunja ; i ++) {
        if(bunja%i == 0 && bunmo%i == 0) {
            g = max(i, g);
        }
    }
    
    answer.push_back(bunja/g);
    answer.push_back(bunmo/g);
    return answer;
}