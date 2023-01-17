#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n=0; int tmp;
    cin >> n;
    vector<int> v;
    
    for (int i=0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
        }
    
    sort(v.begin(), v.end());
    
    cout << v.front() << " " << v.back();
    return 0;
}