#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> answer;
    answer.clear();
    string fellin;
    bool isfellin;
    cin>>fellin;
    while(!(fellin=="0")){
        isfellin = true;
        for(int i=0; i<fellin.length()/2; i++){
            if(!(fellin[i]==fellin[fellin.length()-1-i])) isfellin = false;
        }
        if(isfellin) answer.push_back("yes");
        else answer.push_back("no");
        cin>>fellin;
    }
    for(int i=0; i<answer.size(); i++) cout<<answer[i]<<endl;
    return 0;
}