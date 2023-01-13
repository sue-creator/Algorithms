#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0, p, r;
    p = n/slice;
    r = n - p*slice;
    
    if (r==0){
        return p;
    }
    else{
        return p+1;
    }
}