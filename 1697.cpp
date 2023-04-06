#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<pair<int,int>> q;
    int subin, sister;
    int visited[100001] = {0,};
    cin >> subin >> sister;
    q.push(make_pair(subin,0));
    visited[subin] = 1;
    while(!q.empty()){
        pair<int,int> cur = q.front(); q.pop();
        if(cur.first == sister){
            cout << cur.second << "\n";
            break;
        }
        if(cur.first > 0 && !visited[cur.first-1]){
            visited[cur.first-1] = 1;
            q.push(make_pair(cur.first-1, cur.second+1));
        }
        if(cur.first < 100000 && !visited[cur.first+1]){
            visited[cur.first+1] = 1;
            q.push(make_pair(cur.first+1, cur.second+1));
        }
        if(cur.first <= 50000 && !visited[cur.first*2]){
            visited[cur.first*2] = 1;
            q.push(make_pair(cur.first*2, cur.second+1));
        }
    }
    return 0;
}