#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> yaksu;
    
    for(int i=1; i<=n ;i++){
        if (n%i == 0){
            yaksu.push_back(i);
            //printf("%d ",i);
            }
        }
    
    for(int i=0; i<yaksu.size() ;i++){
       answer += yaksu[i];
       //printf("%d ",yaksu[i]);
    }
    
    return answer;
}