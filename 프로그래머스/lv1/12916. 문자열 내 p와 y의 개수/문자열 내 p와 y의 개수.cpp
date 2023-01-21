#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p=0; int y=0;
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
        if(s[i]=='p'){
            p++;
        }
        else if(s[i]=='y'){
            y++;
        }
    }

    if(p == y){
        return true;
    }
    else return false;
}