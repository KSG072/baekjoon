#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string name;
    string ans;
    int n, nope=0;
    int cnt[26] = {0,};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        cin>>name;
        cnt[int(name[0])-97]++;
    }
    for(int i=0; i<26; i++){
        if(cnt[i]>=5){
            ans += char(i+97);
            nope=1;
        }
    }
    if(nope!=1) cout<<"PREDAJA\n";
    else cout<<ans<<"\n";
    return 0;
}