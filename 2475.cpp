#include <iostream>
using namespace std;
int main(){
    int a[5];
    scanf("%d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4]);
    cout<<(a[0]*a[0]+a[1]*a[1]+a[2]*a[2]+a[3]*a[3]+a[4]*a[4])%10<<"\n";
    return 0;
}