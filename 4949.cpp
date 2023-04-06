#include <iostream>
#include <string>
#include <stack>
using namespace std;

#define SMALL 1
#define LARGE 2
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    stack<int> bucket;
    string input, tar;
    int flag;
    getline(cin, input);

    while(input != "."){
        flag = 0;
        while( !bucket.empty() ) bucket.pop();
        for(int i=0; i<input.length(); i++){
            tar = input[i];
            if(tar == ")" || tar == "]"){
                if(bucket.empty()){
                    cout << "no\n";
                    flag = 1;
                    break;
                }
                else{
                    if((tar == ")" && bucket.top()==SMALL) || (tar == "]" && bucket.top()==LARGE)){
                        bucket.pop();
                    }
                    else{
                        cout << "no\n";
                        flag = 1;
                        break;
                    }
                }
            }
            else if(tar=="(") bucket.push(SMALL);
            else if(tar=="[") bucket.push(LARGE);
        }
        if(!flag){
            if(bucket.empty()) cout << "yes\n";
            else cout << "no\n";
        }
        getline(cin, input);

    }
    return 0;
}