#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int memo[100001] = {0,};
    int n, m, x;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x;
        memo[i+1] = memo[i] + x;
    }
    for(int i=0; i<m; i++){
        int to, from;
        cin >> to >> from;
        cout << memo[from] - memo[to-1] << "\n";
    }
    return 0;
}