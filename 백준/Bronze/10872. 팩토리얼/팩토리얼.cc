#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n=1;
    cin >> n;
    int dp[n+1];
    dp[0]=1;
    
    for(int i=1; i<n+1; i++){
        dp[i] = i*dp[i-1];
        }
    
    cout << dp[n];
    
    return 0;
}