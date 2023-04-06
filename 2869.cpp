#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int up, down, goal;
    cin >> up >> down >> goal;
    int abs = (goal-up)/(up-down);
    if((goal-up)%(up-down)==0){
        cout << abs+1 << "\n";
    }
    else{
        cout << abs+2 << "\n";
    }
    return 0;
}