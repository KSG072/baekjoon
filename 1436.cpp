#include <istream>
using namespace std;
bool checker(int n){
    int stack = 0;
    while(n>0){
        if(n%10 == 6) stack++;
        else stack = 0;
        if(stack == 3) return true;
        n = n/10;
    }
    return false;
}
int main(){
    int num, count = 1, siries = 666;
    scanf("%d", &num);
    while(count != num){
        siries++;
        if(checker(siries)) count++;
    }
    printf("%d\n", siries);
    return 0;
}