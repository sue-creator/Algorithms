#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    int n, m;
    int cnt = 0;
    int tmp;
    cin >> n >> m;
    
    queue<int> q;
    queue<int> ans;
  
    for (int i=1; i < n+1; i++){
        q.push(i);
        }
    cout << "<";
    
    while(q.size()-1) {
        for (int j=1; j < m; j++){
            tmp = q.front();
            q.pop();
            q.push(tmp);
            }
        cout << q.front() << ", ";
        q.pop();
    }
    
    cout << q.front() << ">";
    q.pop();
    
    return 0;
}