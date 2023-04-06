#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <functional>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m;
    string input;
    priority_queue<string, vector<string>, greater<string>> result;
    map<string,int> map;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> input;
        map.insert(make_pair(input,i));
    }
    map.insert(make_pair("...", -1));
    for(int i=0; i<m; i++){
        cin >> input;
        if(map.find(input) != map.end()){
            result.push(input);
        }
    }
    cout << result.size() << "\n";
    while(!result.empty()){
        cout << result.top() << "\n";
        result.pop();
    }
    return 0;
}