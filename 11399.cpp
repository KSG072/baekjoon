#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr,arr+n);
    for(int j=0; j<2; j++){
    for(int i=1; i<n; i++){
        arr[i] = arr[i-1]+arr[i];
    }}
    cout << arr[n-1] << "\n";
    return 0;
}
