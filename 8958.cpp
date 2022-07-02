#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, bonus, score;
    cin>>n;
    string ox;
    for(int i=0; i<n; i++){
        bonus=0;
        score=0;
        cin>>ox;
        for(int j=0; j<ox.length(); j++){
            if(ox.substr(j,1)=="O") bonus++;
            else bonus = 0;
            score+=bonus;
        }
        cout<<score<<"\n";
    }
    return 0;
}