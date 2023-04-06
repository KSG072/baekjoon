#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int arr[10000] = {0,};
    int n, input;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> input;
        arr[input-1]++;
    }
    for(int i=0; i<10000; i++){
        for(int j=0; j<arr[i]; j++){
            cout << i+1 << "\n";
        }
    }
    return 0;
}