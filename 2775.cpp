#include <iostream>
using namespace std;
int check(int floor, int no){
    if(no == 1) return 1;
    else if(floor == 0) return no;
    else return check(floor, no-1) + check(floor-1, no);
}
int main(){
    int N, floor, no;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &floor, &no);
        printf("%d\n", check(floor, no));
    }
    return 0;
}