#include <string>
#include <vector>
#include <numeric>

using namespace std;

__int128 factorial(int x){
    if (x==1 || x==0) {
        return 1;}
    else {
        return x*factorial(x-1);}
}

__int128 solution(int balls, int share) {
    return factorial(balls)/(factorial(balls-share)*factorial(share));
}