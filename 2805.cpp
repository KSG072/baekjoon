#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, m;
    int* trees = (int*)malloc(n*sizeof(int));
    long sum = 0;
    int limit;
    cin >> n >> m;

    for(int i=0; i<n; i++) cin >> trees[i];
    sort(trees, trees+n);

    int left = 0, right = trees[n-1];
    limit = trees[n/2];

    while(left<right){
        sum = 0;
        limit = (right+left)/2;
        for(int i=0; i<n; i++){
            sum += trees[i]>
            limit ? trees[i]-limit : 0;
        }
        if(sum == m) break;
        else{
            if(sum > m) left = limit+1;
            else right = limit;
        }
    }
    while(sum < m){
        sum = 0;
        limit--;
        for(int i=0; i<n; i++){
            sum += trees[i]>limit ? trees[i]-limit : 0;
        }
    }
    cout<<limit<<"\n";
    return 0;
}