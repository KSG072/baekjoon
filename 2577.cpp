#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    int cnt[10]={};
    cin>>a>>b>>c;
    a = a*b*c;
    do{
        cnt[a%10]++;
        a/=10;
    }while(a!=0);
    for(int i=0; i<10; i++) cout<<cnt[i]<<"\n";
    return 0;
}