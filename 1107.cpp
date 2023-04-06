#include <iostream>
#include <string>
using namespace std;
int available[10] = {1,1,1,1,1,1,1,1,1,1};
int can_go(string where){
    for(int i=0; i<where.length(); i++){
        if(!available[stoi(where.substr(i,1))]) return 0;
    }
    return 1;
}
int main(){
    int goal, n, temp;
    cin >> goal >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        available[temp] = 0;
    }
    int btn_count = abs(goal-100);
    for(int i=0; i<1000000; i++){
        if(can_go(to_string(i))){
            int temp = to_string(i).length() + abs(goal-i);
            btn_count = min(btn_count, temp);
        }
    }
    cout << btn_count << "\n";
    return 0;
}