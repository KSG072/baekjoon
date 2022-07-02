#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int m, n;
    cin>>m>>n;
    int map[n+1]; fill_n(map+2,n-1,false); map[0]=true; map[1]=true;
    for(int i=2; i<=sqrt(n); i++){
        for(int j=i+i; j<=n; j+=i) map[j]=true;
    }
    for(int i=m; i<=n; i++) if(!map[i]) cout<<i<<"\n";
    return 0;
}