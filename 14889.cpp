#include <iostream>
using namespace std;
int n = 0;
int team_table[20][20];
int start_team[20] = {0,};
int minimum = 99999999;

void calculate(){
    int diff = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(start_team[i] && start_team[j]){
                diff += (team_table[i][j] + team_table[j][i]);
            }
            else if(!(start_team[i] || start_team[j])){
                diff -= (team_table[i][j] + team_table[j][i]);

            }
        }
    }
    diff = abs(diff);
    minimum = (minimum < diff) ? minimum : diff;
}

void choose(int idx, int cnt){
    if(cnt == n/2){
        calculate();
    }
    else{
        for(int i=idx; i<n; i++){
            start_team[i] = 1;
            choose(i+1, cnt+1);
            start_team[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> team_table[i][j];
        }
    }
    choose(0, 0);
    cout << minimum << "\n";
    return 0;
}