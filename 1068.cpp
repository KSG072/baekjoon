#include <iostream>
using namespace std;
int main(){
    int n, delnum;
    int tree[51] = { 100 };
    for(int i=0; i<n; i++) cin>>tree[i];
    cin>>delnum;
    tree[delnum] = 100;
    delnum = delnum*2 + 1;
    while(delnum<n){
        tree[delnum] = 100;
        tree[delnum+1] = 100;
        delnum = delnum*2 + 1;
    }
    
    return 0;
}