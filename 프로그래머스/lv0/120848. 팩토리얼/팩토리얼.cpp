#include <string>
#include <vector>

using namespace std;

int facto(int n){
    int dp[n];
    dp[0]=1;
    
    for (int i=1 ; i<n+1 ; i++){
       dp[i] = i*dp[i-1];
    }
    return dp[n];
}


int solution(int n) {
    int answer = 0;
    for (int i=1; i<n+1; i++){
        if (facto(i) <= n){
            answer = i;
        }
       else {
           return answer;
       }
    }
}