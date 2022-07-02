#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
using namespace std;
int filter(int* start, int* finish, int* memo, int n, int ans){
    int greedy_line;
    int max = -1;
    for(int i=0; i<n; i++){
        if(max < memo[i]){
            max = memo[i];
            greedy_line = i;
        }
    }
    if(max == 0) return ans;
    else{
        for(int i=0; i<n; i++){
            if((start[i] > start[greedy_line] && finish[i] < finish[greedy_line]) || (start[i] < start[greedy_line] && finish[i] > finish[greedy_line])){
                memo[i]--;
            }
        }
        start[greedy_line] = -1; finish[greedy_line] = -1;
        return filter(start, finish, memo, n, ans+1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int* start = (int *)malloc(sizeof(int) * n);
    int* finish = (int *)malloc(sizeof(int) * n);

    for(int i=0; i<n; i++){
        scanf("%d %d", start+i, finish+i);
    }
    int memo[n];
    memset(memo, 0, n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((start[j] < start[i] && finish[j] > finish[i]) || (start[j] > start[i] && finish[j] < finish[i])){
                memo[i]++;
            }
        }
    }
    printf("%d\n", filter(start, finish, memo, n, 0));
    return 0;
}