#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    int p1, q1, p2, q2;
        
    cin >> n >> m;
    int map1[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
                cin >> map1[i][j];
            }
    }
    
    cin >> k;
    int s[k];
    for(int i=0; i<k; i++){
        s[i] = 0;
        }
    
    for(int i=0; i<k; i++){
        cin >> p1 >> q1 >> p2 >> q2;
        
        for(int x=p1-1; x<p2; x++){
            for(int y=q1-1; y<q2; y++){
                s[i] += map1[x][y];
                //cout << i << " " << s[i] << "\n";
                //cout << map1[x][y] << " ";
                }
            }
        }

    for(int i=0; i<k-1; i++){
        cout << s[i] << "\n";
        }
    cout << s[k-1];

    return 0;
}