#include <iostream>
#include <unistd.h>
#include <stdlib.h>
using namespace std;
int main(){
    long long int n, k, lo = 0, hi = 0;
    int *lans; 
    scanf("%lld %lld", &n, &k);
    lans = (int*)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++) {
        scanf("%d", lans+i);
        if(hi < lans[i]) hi = lans[i];
    }
    long long int tmp = 0, mid;
    while(lo <= hi){
        mid = (lo + hi)/2;
        printf("mid : %lld\nlow : %lld\nhi : %lld\n", mid, lo, hi);
        tmp = 0;
        for(int i=0; i<n; i++){
            tmp += lans[i]/mid;
        }
        printf("tmp : %lld\n======================\n", tmp);
        if(tmp >= k) lo = mid+1;
        else hi = mid-1;
        sleep(1);
    }
    printf("%lld\n", lo-1);
    return 0;
}