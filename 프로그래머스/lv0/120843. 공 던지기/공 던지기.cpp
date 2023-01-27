#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    
    int n = numbers.size();
    int ball = 1;
    for (int i=1; i<k ;i++){
        ball += 2;
       if ( ball > n){
           ball -= n;
       }
    }
    return ball;
}