#include <iostream>
using namespace std;
int main(){
    int n,sum=0,x;
    cin>>n;
    for(int i=0; i<n; i++){
        scanf("%1d", &x);
        sum += x;
    }
    cout<<sum<<"\n";
    return 0;
}