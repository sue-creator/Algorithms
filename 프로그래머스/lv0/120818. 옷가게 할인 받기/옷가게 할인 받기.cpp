#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    if (price >=100000 && price < 300000){
        return price*0.95;
    }
    else if(price >= 300000 && price < 500000){
        return price*0.90;
    }
    else if(price >= 500000){
        return price*0.80;
    }
    else return price;
}