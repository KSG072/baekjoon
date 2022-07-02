#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, k, index=0, cnt; cin>>n>>k;
    bool arr[n]; fill_n(arr, n, true);
    string ans = "<";
    for(int i=0; i<n; i++){
        if(0<i&&i<n) ans+=", ";
        cnt = 1;
        while(cnt<k){
            if(index+1 >= n) index = 0;
            else index++;
            if(arr[index]) cnt++;
        }
        ans += to_string(index+1);
        arr[index] = false;
        if(i<n-1){
            do{
                if(index+1 >= n) index = 0;
                else index++;
            }while(!arr[index]);
        }
    }
    cout<<ans<<">\n";
    return 0;
}