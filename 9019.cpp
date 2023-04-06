#include <iostream>
#include <string>
#include <queue>
#include <cstring>
using namespace std;
bool visited[10000];
int input, goal;
string bfs(){
    queue<pair<int,string>> q;
    q.push(make_pair(input, ""));
    visited[input] = true;

    while(!q.empty()){
        int cur = q.front().first;
        string oper = q.front().second;
        q.pop();
        if(cur == goal){
            return oper;
        }
        else{
            int D = (2*cur)%10000;
            if(!visited[D]){
                q.push(make_pair(D,oper+"D"));
                visited[D] = true;
            }
            int S = (cur-1) >= 0 ? (cur-1) : 9999;
            if(!visited[S]){
                q.push(make_pair(S,oper+"S"));
                visited[S] = true;
            }
            int L = (cur%1000)*10 + cur/1000;
            if(!visited[L]){
                q.push(make_pair(L,oper+"L"));
                visited[L] = true;
            }
            int R = (cur%10)*1000 + cur/10;
            if(!visited[R]){
                q.push(make_pair(R,oper+"R"));
                visited[R] = true;
            }
        }
    }
}
int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        memset(visited, false, sizeof(visited));
        cin >> input >> goal;
        cout << bfs() << "\n";
    }
    return 0;
}