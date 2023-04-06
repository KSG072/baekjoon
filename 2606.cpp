#include <iostream>
using namespace std;

int infected[101] = {0,};
int line[101][101] = {0,};
int cnt = 0, n;

void infect(int idx){
    infected[idx] = 1;
    cnt++;
    for(int i=1; i<n+1; i++){
        if(line[idx][i] && !infected[i]){
            infect(i);
        }
    }
}
int main(){
    int lines;
    int a, b;
    cin >> n >> lines;
    for(int i=0; i<lines; i++){
        cin >> a >> b;
        line[a][b] = 1;
        line[b][a] = 1;
    }infect(1);

    cout<<cnt-1<<"\n";
    return 0;
}