#include <iostream>
#include <stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    stack<int> bucket;
    int n, input;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> input;
        if(input == 0) bucket.pop();
        else bucket.push(input);
    }
    input = 0;
    while(!bucket.empty()){
        input += bucket.top();
        bucket.pop();
    }
    cout << input << "\n";
    return 0;
}