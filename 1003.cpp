#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int zero[41], one[41];
    int t, n;
    zero[0] = 1; zero[1] = 0;
    one[0] = 0; one[1] = 1;
    for(int i=2; i<41; i++){
        zero[i] = zero[i-2] + zero[i-1];
        one[i] = one[i-2] + one[i-1];
    }
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        printf("%d %d\n",zero[n],one[n]);
    }
    return 0;
}