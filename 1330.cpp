#include <iostream>
#include <string>
using namespace std;

int main(void){
    int a,b;
    string ans;
    cin>>a>>b;
    ans = a>b? ">": a<b? "<":"=";
    cout<<ans<<endl;
    return 0;
}