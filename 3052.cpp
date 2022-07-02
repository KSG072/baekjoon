#include <iostream>
using namespace std;
int main(){
    int yj[42] = {}, input[10], ans = 0;
    for(int i=0; i<10; i++){
        cin>>input[i];
        yj[input[i]%42]++;
    }
    for(int i=0; i<42; i++) if(yj[i]>0) ans++;
    cout<<ans<<"\n";
    return 0;
}