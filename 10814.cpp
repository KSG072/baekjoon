#include <iostream>
#include <string>
using namespace std;
int main(){
    int t, age, pos;
    string name;
    cin>>t;
    int ages[201];
    for(int i=0; i<201; i++) ages[i] = 0;
    string names[201];
    for(int i=0; i<201; i++) names[i] = "none";
    for(int i=0; i<t; i++){
        cin>>age>>name;
        ages[age]++;
        if(((string) "none").compare(names[age]) == 0) names[age] = name;
        else names[age] = names[age]+" "+name;
    }
    for(int i=0; i<201; i++){
        while(ages[i]>=1){
            if(ages[i]>1){
                pos = names[i].find(" ");
                cout<<i<<" ";
                cout<<names[i].substr(0,pos)<<"\n";
                names[i] = names[i].substr(pos+1);
            }
            else cout<<i<<" "<<names[i]<<"\n";
            ages[i]--;
        }
    }
    return 0;
}