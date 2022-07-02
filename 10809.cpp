#include <iostream>
#include <string>
using namespace std;
int main(){
    int alph[26];fill_n(alph,26,-1);
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++) if(alph[int(s[i])-97]<0) alph[int(s[i])-97] = i;
    for(int i=0; i<25; i++) cout<<alph[i]<<" ";
    cout<<alph[25]<<"\n";
    return 0;
}