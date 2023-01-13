#include <string>
#include <vector> 
using namespace std;

int solution(int n) {  
    int answer = 0;
    for (int i=n; i<6*n+1; i++){
        if ((i%6 == 0)&&(i%n == 0)){
            return i/6;}
        else continue;
    } 
}