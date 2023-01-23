#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    
    for (int i=left; i<right+1; i++){
        int cnt=1;
        for (int j=2; j<i+1 ;j++ ){
            if (i%j == 0){
                cnt++;}
            else {continue;}
        }
        if (cnt%2 == 0){
            answer += i;
        }
        else{answer -= i;}
    }
    

    return answer;
}