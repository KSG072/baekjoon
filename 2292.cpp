#include <stdio.h>
int main(){
    int count=1, start=1, fin;
    scanf("%d", &fin);
    while(true){
        start += 6*(count-1);
        if(start>=fin) break;
        count++;
    }
    printf("%d\n", count);
    return 0;
}