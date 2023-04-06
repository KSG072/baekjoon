#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int map[1001][1001];
int visited[1001] = {0,};
int point_cnt;
queue<int> q;

void dfs(int start){
    visited[start] = 1;
    cout << start << " ";
    for(int i=1; i<point_cnt+1; i++){
        if(!visited[i] && map[start][i]) dfs(i);
    }
}
void bfs(int start){
    int cur = start;
    visited[start] = 1;
    q.push(start);
    while(!q.empty()){
        cur = q.front();
        cout << cur << " ";
        q.pop();
        for(int i=1; i<point_cnt+1; i++){
            if(!visited[i] && map[cur][i]){
                visited[i] = 1;
                q.push(i);
            }
        }
    }

}

int main(){
    int x, y;
    int line_cnt, start_point;
    cin >> point_cnt >> line_cnt >> start_point;
    for(int i=0; i<line_cnt ; i++){
        cin >> x >> y;
        map[x][y] = 1;
        map[y][x] = 1;
    }
    dfs(start_point);
    cout<<"\n";
    memset(visited,0,sizeof(visited));
    cout << 1001*sizeof(int)<< " " << sizeof(visited);
    cout<<"\n";

    bfs(start_point);
    return 0;
}