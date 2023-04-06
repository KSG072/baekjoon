#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m;
    map<string, int> poketmon;
    string dict[100000];
    string input;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> input;
        dict[i] = input;
        poketmon.insert(make_pair(input, i+1));
    }
    for(int i=0; i<m; i++){
        cin >> input;
        if(isdigit(input[0]) != 0){
            int idx = stoi(input);
            cout << dict[idx-1] << "\n";
        }
        else{
            cout << poketmon[input] << "\n";
        }
    }
    return 0;
}