#include <iostream>
using namespace std;
int main(){
    int a, n=1, i=1, stack=1;
    cin>>a;
    while(i<a){
        i++;
        stack--;
        if(stack==0){
            n++;
            stack = n;
        }
    }
    if(n%2==0) cout<<1+n-stack<<"/"<<stack<<"\n";
    else cout<<stack<<"/"<<1+n-stack<<"\n";
    return 0;
}