#include <iostream>
using namespace std;

int main(){
    int n, answer;
    int arr[101];
    cin>>n;
    answer = n;
    for(int i=0; i<n; i++) cin>>arr[i];
    for (int i=0; i<n; i++){
        if(arr[i]<=1) answer--;
        else{
            for(int j=2; j<arr[i]; j++){
                if(arr[i]%j==0){
                    answer--;
                    break;
                }
            }
        }
    }
    cout<<answer<<endl;
    return 0;
}