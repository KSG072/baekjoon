#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int>> v;
int child_cnt[51] = {0,};
int deleted[51] = {0,};
void delete_node(int target){
    vector<pair<int,int>>::iterator iter = v.begin();
    for(int i=0; i<v.size(); i++){
        if(v[i].first == target){
            deleted[v[i].first] = 1;
            for(int j=0; j<v.size(); j++){
                if(v[j].first == v[i].second){
                    child_cnt[v[j].first]--;
                }
            }
        }
    }
    if(child_cnt[target] > 0){
        for(int i=0; i<v.size(); i++){
            if(v[i].second == target) {
                delete_node(v[i].first);
            }
        }
    }
}
int main(){
    int n, target, cnt=0;
    cin >> n;
    v.reserve(n+1);
    for(int i=0; i<n; i++){
        int parent;
        cin >> parent;
        child_cnt[parent]++;
        v.push_back(make_pair(i, parent));
    }
    cin >> target;
    delete_node(target);
    for(auto i : v){
        if(!deleted[i.first] && child_cnt[i.first] == 0) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}