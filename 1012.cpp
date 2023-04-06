#include <iostream>
#include <cstring>
using namespace std;
int map[51][51] = {0,};
int checked[51][51] = {0,};
int ji_leong_yee = 0;
int row, col;
void dfs(int x, int y){
    checked[x][y] = 1;
    if(y < col-1 && !checked[x][y+1] && map[x][y+1]) dfs(x,y+1);
    if(x < row-1 && !checked[x+1][y] && map[x+1][y]) dfs(x+1,y);
    if(y > 0 && !checked[x][y-1] && map[x][y-1]) dfs(x,y-1);
    if(x > 0 && !checked[x-1][y] && map[x-1][y]) dfs(x-1,y);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, cnt;
    int x, y;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> row >> col >> cnt;
        for(int j=0; j<cnt; j++){
            cin >> x >> y;
            map[x][y] = 1;
        }
        for(int j=0; j<row; j++){
            for(int k=0; k<col; k++){
                if(map[j][k] && !checked[j][k]){
                    dfs(j,k);
                    ji_leong_yee++;
                }
            }
        }
        cout << ji_leong_yee << "\n";
        for(int j=0; j<51; j++){
            memset(map[j], 0, sizeof(int) * 51);
            memset(checked[j], 0, sizeof(int) * 51);
        }
        ji_leong_yee = 0;
    }
    return 0;
}