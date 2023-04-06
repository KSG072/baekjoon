#include <iostream>
#include <queue>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    queue<pair<int,int>> q1;
    queue<pair<int,int>> q2;
    cin >> n >> m;
    int** box = (int**) malloc(sizeof(int*) * (m));
    for(int i=0; i<m; i++){
        box[i] = (int*) malloc(sizeof(int) * (n));
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> box[i][j];
            if(box[i][j] == 1) q1.push(make_pair(i,j));
        }
    }
    int day = 0;
    while(1){
        while(!q1.empty()){
            int i = q1.front().first, j = q1.front().second; q1.pop();
            if(i > 0 && box[i-1][j]==0 && box[i-1][j]!=-1){
                box[i-1][j] = 1;
                q2.push(make_pair(i-1, j));
            }
            if(i < m-1 && box[i+1][j]==0 && box[i+1][j]!=-1){
                box[i+1][j] = 1;
                q2.push(make_pair(i+1, j));
            }
            if(j > 0 && box[i][j-1]==0 && box[i][j-1]!=-1){
                box[i][j-1] = 1;
                q2.push(make_pair(i, j-1));
            }
            if(j < n-1 && box[i][j+1]==0 && box[i][j+1]!=-1){
                box[i][j+1] = 1;
                q2.push(make_pair(i, j+1));
            }
        }if(q2.empty()) break;
        day++;
        while(!q2.empty()){
            int i = q2.front().first, j = q2.front().second; q2.pop();
            if(i > 0 && box[i-1][j]==0 && box[i-1][j]!=-1){
                box[i-1][j] = 1;
                q1.push(make_pair(i-1, j));
            }
            if(i < m-1 && box[i+1][j]==0 && box[i+1][j]!=-1){
                box[i+1][j] = 1;
                q1.push(make_pair(i+1, j));
            }
            if(j > 0 && box[i][j-1]==0 && box[i][j-1]!=-1){
                box[i][j-1] = 1;
                q1.push(make_pair(i, j-1));
            }
            if(j < n-1 && box[i][j+1]==0 && box[i][j+1]!=-1){
                box[i][j+1] = 1;
                q1.push(make_pair(i, j+1));
            }
        }if(q1.empty()) break;
        day++;
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(box[i][j] == 0){
                cout << "-1\n";
                return 0;
            }
        }
    }
    cout << day << "\n";
    return 0;
}