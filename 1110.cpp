#include <iostream>
using namespace std;
int main(){
    int a, tar;
    cin>>a;
    tar = a;
    for(int count=1;; count++){
        (tar/10+tar%10)>=10 ? tar = tar%10*10+(tar/10+tar%10)%10 : tar = tar%10*10+(tar/10+tar%10);
        if(tar==a){
            cout<<count<<endl;
            break;
        }
    }
    return 0;
}