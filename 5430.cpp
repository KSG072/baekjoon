#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
vector<int> workspace;
int d_start, d_end, data_size, d_reverse=-1;
void insert_data(string* data){
    string raw =  (*data).substr(1,(*data).length()-2);
    istringstream ss(raw);
    string buffer;
    while(getline(ss, buffer, ',')){
        workspace.push_back(stoi(buffer));
    }
}
int execute(char command){
    // cout << "command : " << command << "\n";
    switch(command){
        case 'R':
        d_reverse *= -1;
        break;
        case 'D':
        if(data_size == 0) return -1;
        if(d_reverse < 0) d_start++;
        else d_end--;
        data_size--;
        break;
        default: break;
    }
    return 0;
}
string result(){
    if(data_size == 0) return string("[]");
    string result = "[";
    if(d_reverse < 0){//순방향
        for(int i=d_start; i<data_size; i++){
            result += to_string(workspace[i]);
            result += ',';
        }
        result += to_string(workspace[d_end]);
    }
    else{//역방향
        for(int i=d_end; i>d_start; i--){
            result += to_string(workspace[i]);
            result += ',';
        }
        result += to_string(workspace[d_start]);
    }
    return result+"]";
}
int main(){
    int n;
    string commands;
    string data;
    vector<string> results;
    cin >> n;
    for(int i=0; i<n; i++){
        int flag = 0;
        cin >> commands >> data_size >> data;
        d_start=0;d_end=data_size-1;d_reverse=-1;
        workspace.clear();
        insert_data(&data);
        for(int j=0; j<commands.length(); j++){
            // cout<<d_start<<d_end<<data_size<<d_reverse<<"\n";
            if(execute(commands[j]) < 0){
                flag=1;
                break;
            }
        }
        if(!flag) results.push_back(result());
        else results.push_back(string("error"));
    }
    for(auto result : results){
        cout << result << "\n";
    }
    return 0;
}