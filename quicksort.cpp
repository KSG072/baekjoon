#include <iostream>
using namespace std;
void quick(int arr[], int left, int right){
    if(left<right){
    int pivot=arr[left]; int low=left+1; int high=right; int temp;
    while(low<high){
        if(arr[low]<pivot) low++;
        if(arr[high]>pivot) high--;
        if(!(low<high)) break;
        if(arr[low]>pivot && arr[high]<pivot){
            temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    }
    if(low==high && arr[low]>pivot){
        temp = arr[low-1];
        arr[low-1] = pivot;
        arr[left] = temp;
        quick(arr, left, low-1); quick(arr, low, right);
    }
    else{
        temp = arr[high];
        arr[high] = pivot;
        arr[left] = temp;}
        quick(arr, left, high-1); quick(arr, high+1, right);
    }
}
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
    int n, x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>x;
        arr[i] = x;
    }
    quick(arr,0,n-1);
    for(int i=0; i<n; i++) cout<<arr[i]<<"\n";
    return 0;
}