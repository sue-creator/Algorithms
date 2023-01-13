#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

int solution(vector<int> array) {
    set<int> modnums; vector<int> candi; /* modnums: array에 나오는 숫자 중에서 이전 빈도 보다 큰 수가 나온다면 저장하는 공간;
    candi: map 안에서 최대빈도수와 같은 key값이 있으면 저장 */
    int m; int p2=-1; //지금 보니까 m을 쓴 적이 없음
    map<int, int> counts; //map에 counts[int a]=int b와 같이 a라는 숫자가 b번 나왔음을 저장함.
    map<int, int>::iterator p;
    
    for (int i=0; i<1001; i++){
        counts.insert(pair<int, int>(i, 0));
    }
    
    for (int i=0; i<array.size(); i++){
        counts[array[i]]++;
        p2 = max(counts[array[i]], p2);
        
        if (counts[array[i]] >= p2){
            modnums.insert(array[i]);
        }
    }
    
    // set 안에 있는 것들 차례대로 돌면서 max value랑 값이 같냐 
    for(auto j : modnums){
        if (counts[j] == p2){
            candi.push_back(j);
        }
        else continue;
    }

    if (candi.size() == 1){
        return candi.back();
    }
    else {
        return -1;
    }
    
}
