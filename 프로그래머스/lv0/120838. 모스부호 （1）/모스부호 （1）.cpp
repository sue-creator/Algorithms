#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

string solution(string letter) {
    string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string answer = "";
    vector<string> letter_s;
    map<string, char> mp;
    char p='a';
    for (int i=0; i<26; i++){
       mp[morse[i]] = p+i;
    }
    
    stringstream ss(letter);
    ss.str(letter);

    string word;

    while(ss >> word) {
        letter_s.push_back(word);
    }
    /*
    for (int i=0;i<letter_s.size();i++){
       cout << letter_s[i] << endl;
    }
    */
    
    for (int i=0; i<letter_s.size() ; i++){
        answer += mp[letter_s[i]];
    }
    
    
    return answer;
}