#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    int n, tar, num=1;
    string answer = "";
    stack<int> bottle;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>tar;
        while(num<=tar){
            bottle.push(num);
            num++;
            answer.append("+\n");
        }
        if(bottle.top()==tar){
            bottle.pop();
            answer.append("-\n");
        }
        else{
            answer = "NO\n";
            break;
        }
    }
    cout<<answer;
    return 0;
}