#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int q, r=0;
    q = n/7; r = n-(q*7);
    if (r == 0){
        return q;
    }
    else{
        return q+1;
    }
    
}