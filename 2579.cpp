#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int* stair = (int*) malloc(sizeof(int) * (n+1));
    for(int i=1; i<=n; i++) cin >> stair[i];
    if(n < 3) {
        int sum = 0;
        for(int i=1; i<=n; i++) sum += stair[i];
        cout << sum << "\n";
    }
    else{
        int* dp = (int*) malloc(sizeof(int) * (n+1));
        dp[0] = 0;
        dp[1] = stair[1];
        dp[2] = dp[1] + stair[2];
        for(int i=3; i<=n; i++){
            dp[i] = (dp[i-3]+stair[i-1]+stair[i]) > (dp[i-2]+stair[i]) ? (dp[i-3]+stair[i-1]+stair[i]) : (dp[i-2]+stair[i]);
        }
        cout << dp[n] << "\n";
    }
    return 0;
}