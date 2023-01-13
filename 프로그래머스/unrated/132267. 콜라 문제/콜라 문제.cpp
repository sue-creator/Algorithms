#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b, int n) {
    int p, q, r=0;
    int answer = 0;
    
    while (n != 0){
        
        if (r != 0){
            n = n+r;
            q = (n/a);
            answer += q*b;        
            r = n - a*q;
            n = q*b;
            printf("!0: %d, %d, %d, %d \n", q, answer, r, n);
        }
        else{
            q = (n/a);
            answer += q*b;       
            r = n - a*q;
            n = q*b;
            printf("0: %d, %d, %d, %d \n", q, answer, r, n);
        }
        
    }
    
    return answer;
}