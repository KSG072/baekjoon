#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> ascend = {1,2,3,4,5,6,7,8};
    vector<int> descend = {8,7,6,5,4,3,2,1};
    vector<int> arr;
    int n;
    for(int i=0; i<8; i++){
        cin>>n;
        arr.push_back(n);
    }
    if(arr==ascend) cout<<"ascending";
    else if(arr==descend) cout<<"descending";
    else cout<<"mixed";
    return 0;
}