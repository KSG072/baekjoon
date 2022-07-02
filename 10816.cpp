// #include <algorithm>
// int bi_search(int t, int arr[]){
//     int length = sizeof(arr) / sizeof(arr[0]);
//     int pivot = length/2;
//     while(arr[pivot] != t){
//         if(arr[pivot] > t) pivot = pivot/2;
//         else if(arr[pivot] < t) pivot = (length+pivot)/2;
//     }
//     return pivot;
// }
// int main(){
//     int n1, n2, x;
//     scanf("%d", &n1);
//     int sanggeun[n1];
//     for(int i=0; i<n1; i++) scanf("%d", sanggeun[i]);
//     scanf("%d", &n2);
//     int target[n2];
//     for(int i=0; i<n2; i++) scanf("%d", target[i]);
// }
#include <iostream>
int plus[10000000] = { 0 };
int minus[10000000] = { 0 };
int main(){
    int n, card;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &card);
        if(card >= 0) plus[card]++;
        else minus[card*(-1)]++;
    }
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &card);
        if(card >= 0) printf("%d ", plus[card]);
        else printf("%d ", minus[card*(-1)]);
    }
}