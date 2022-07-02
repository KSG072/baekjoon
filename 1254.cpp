#include <iostream>
#include <string>
using namespace std;
bool ispalin(string s, int length);
int main(){
    string palin;
    cin>>palin;
    int len = palin.length(), i = 0;
    while(i<len){
        if(ispalin(palin,i)) break;
        else i++;
    }
    cout<<len+i<<"\n";
    return 0;
}
bool ispalin(string s, int n){
    bool answer = true;
    int len = s.length()+n;
    for(int i=n; i<len/2; i++){
        if(s[i]!=s[len-i-1]) {
            answer = false;
            break;
        }
    }
    return answer;
}