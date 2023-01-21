#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

long long solution(long long n) {
    string st="";
    vector<int> tmp;
    
    while(n>0){
        tmp.push_back(n%10);
        n = n/10;
    }
    
    sort(tmp.begin(), tmp.end());
    reverse(tmp.begin(), tmp.end());
    
    for (int i=0; i<tmp.size(); i++){
       st += to_string(tmp[i]);
    }
    
    return stoll(st);
}