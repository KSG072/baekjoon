#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int cnt[2000001] = {};
    int n, x; cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        cnt[x+1000000]++;
    }
    for(int i=0; i<2000001; i++) if(cnt[i]>0) cout<<i-1000000<<"\n";
    return 0;
}