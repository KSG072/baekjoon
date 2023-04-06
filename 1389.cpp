#include <iostream>
using namespace std;
int map[101][101] = {0,};
int floyd[101][101] = {0,};
int main(){
    int people, lines;
    cin >> people >> lines;
    for(int i=0; i<lines; i++){
        int to, from;
        cin >> to >> from;
        map[to][from] = 1;
        map[from][to] = 1;
    }

    for(int i=1; i<=people; i++){
        for(int j=1; j<=people; j++){
            if(i==j) floyd[i][j] = 0;
            else if (map[i][j]) floyd[i][j] = 1;
            else floyd[i][j] = 999;
        }
    }

    for(int i=1; i<=people; i++){
        for(int j=1; j<=people; j++){
            for(int k=1; k<=people; k++){
                floyd[j][k] = min(floyd[j][k], floyd[j][i] + floyd[i][k]);
            }
        }
    }
    int min=999;
    int ans;
    for(int i=1; i<=people; i++){
        int temp=0;
        for(int j=1; j<=people; j++){
            temp += floyd[i][j];
        }
        if(min > temp){
            min = temp;
            ans = i;
        }
    }
    
    cout << ans << "\n";
    return 0;
}