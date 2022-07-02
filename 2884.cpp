#include <iostream>
using namespace std;
int main(){
    int hour, min;
    cin>>hour>>min;
    if(min>=45) min-=45;
    else{
        if(hour>0) hour--;
        else hour = 23;
        min+=15;
    }
    cout<<hour<<" "<<min<<endl;
    return 0;
}