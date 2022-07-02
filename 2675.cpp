#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, x;
    string s, ans="";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>s;
        for(int j=0; j<s.length(); j++){
            for(int k=0; k<x; k++) ans+=s[j];
        }
        ans+="\n";
    }
    cout<<ans<<"\"
    return 0;
}