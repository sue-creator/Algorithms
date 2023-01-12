#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int s = 0;
    for(int i=0; i<n+1; i++){
        if ((i%2)==0){
            s += i;
        }
        else {continue;}
    }
    return s;
}