#include <iostream>
using namespace std;
int test(int subject, int answer){
    int copy = subject;
    while(copy > 0){
        subject += copy%10;
        copy = copy/10;
    }
    if(subject == answer) return 0;
    else return 1;
}
int main(){
    int N, count = 0;
    scanf("%d", &N);
    int result = 0;
    while(test(result, N)){
        if(result >= N){
            printf("0\n");
            return 0;
        }
        else{
            result++;
        }
    }
    printf("%d\n", result);
    return 0;
}