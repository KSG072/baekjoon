#include <iostream>
using namespace std;
int pay_cal(int i, pair<int, int> table[], int *n){
    if(i >= *n) return 0;

    int cost = table[i].first;
    if(cost == 1){
        return table[i].second + pay_cal(i + 1, table, n);
    }
    else if(cost + i > *n){
        return 0 + pay_cal(i+1, table, n);
    }
    else if(table[i].second + pay_cal(i+cost, table, n) > pay_cal(i+1, table, n)){
        return table[i].second + pay_cal(i + cost, table, n);
    }
    else return pay_cal(i+1, table, n);
    
}
int main(){
    int n; pair<int, int> table[15];
    cin>>n;
    for(int i=0; i<n; i++) cin>>table[i].first>>table[i].second;
    cout<<pay_cal(0, table, &n)<<"\n";
}