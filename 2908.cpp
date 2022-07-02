#include <iostream>
using namespace std;
void cus_swap(int* n){
    int x = *n%10, z = *n/100;
    *n = x*100 + (*n/10%10)*10 + z;
}
int main(){
    int a, b;
    cin>>a>>b;
    cus_swap(&a);
    cus_swap(&b);
    cout<<(a>b?a:b)<<"\n";
    return 0;
}