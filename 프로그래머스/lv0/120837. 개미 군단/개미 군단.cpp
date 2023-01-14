#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int p, q, r;
    p=hp/5;
    hp=hp%5;
    q=hp/3;
    hp=hp%3;
    r=hp;
    
    return p+q+r;
}