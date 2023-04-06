#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, temp;
    int two = 0, five = 0;
    cin >> n;
    for(int i=1; i<n+1; i++){
        temp = i;
        while(temp%2==0){
            temp = temp/2;
            two++;
        }
        while(temp%5==0){
            temp = temp/5;
            five++;
        }
    }
    cout << (two<five ? two : five) << "\n";
    return 0;
}