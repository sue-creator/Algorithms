#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = -1;
    int q, r;
    q = num1/num2;
    answer = num1 - (num2*q);
    
    return answer;
}