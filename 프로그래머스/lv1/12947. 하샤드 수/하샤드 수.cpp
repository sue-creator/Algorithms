#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int xd=0;
    int xx = x;
    while(xx>0){
        xd += (xx%10);
        xx=xx/10;
    }
    if (x % xd ==0){
       return true;
    }
    else return false;
}