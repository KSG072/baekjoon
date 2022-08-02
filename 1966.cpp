#include <iostream>
#include <stdlib.h>
// #include <unistd.h>
using namespace std;
void to_back(int *q, int len){
    int tmp = q[0];
    for(int i=1; i<len; i++){
        q[i-1] = q[i];
    }
    q[len-1] = tmp;
}
void to_out(int *q, int *len, int *seq){
    for(int i=1; i<*len; i++){
        q[i-1] = q[i];
    }
    (*len)--;
    (*seq)++;
    q = (int*)realloc(q, sizeof(int)*(*len));
}
int main(){
    int n;
    int *q;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int len, target_pos, seq = 1;
        scanf("%d %d", &len, &target_pos);
        q = (int*)malloc(sizeof(int) * len);
        for(int j=0; j<len; j++) scanf("%d", q+j);

        while(true){
            // sleep(1);
            int cur = q[0], j;
            int is_changed = 0;
            // printf("[ ");
            // for(int j=0; j<len; j++) printf("%d ", q[j]);
            // printf("]\n");
            // printf("target : %d, index : %d ====seq:%d====\n", q[target_pos], target_pos, seq);
            for(j=1; j<len; j++){
                if(cur < q[j]){
                    to_back(q, len);
                    target_pos = target_pos == 0 ? len-1 : target_pos-1;
                    is_changed = 1;
                    break;
                }
            }
            if(is_changed==0){
                if(target_pos == 0) break;
                else {
                    to_out(q, &len, &seq);
                    target_pos = target_pos == 0 ? len-1 : target_pos-1;
                }
            }
        }
        printf("%d\n", seq);
    }
    return 0;
}