#include <iostream>
using namespace std;
int euclid(int a, int b){
    int x;
    while(a%b!=0){
        x = a%b;
        a = b; b = x;
    }
    return b;
}
int main(){
    int a, b, eu;
    cin>>a>>b;
    eu = euclid(a,b);
    cout<<eu<<"\n"<<a*b/eu<<"\n";
    return 0;
}