#include <iostream>
#include <set>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        multiset<int> s;
        int n;
        cin >> n;
        for(int j=0; j<n; j++){
            char command;
            int data;
            cin >> command >> data;
            if(command == 'I'){
                s.insert(data);
            }
            else if(!s.empty()){
                if(data > 0){
                    auto iter = s.end();
                    iter--;
                    s.erase(iter);
                }
                else{
                    auto iter = s.begin();
                    s.erase(iter);
                }
            }
        }
        if(!s.empty()){
            auto iter = s.end();
            iter--;
            cout << *iter << " " << *s.begin() << "\n";
        }
        else cout << "EMPTY\n";
    }
    return 0;
}