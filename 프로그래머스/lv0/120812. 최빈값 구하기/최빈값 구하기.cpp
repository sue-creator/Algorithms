#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

int solution(vector<int> array) {
    set<int> modnums; vector<int> candi;
    int answer = 0; int m; int p2=-1; 
    map<int, int> counts;
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
    printf("%d ",  modnums.size());
    
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