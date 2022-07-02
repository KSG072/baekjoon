#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int count=0, index=0;
    getline(cin, str);
    if(str==" "){
        cout<<count<<endl;
        return 0;
    }
    else count++;
    if(str.rfind(" ")==str.length()-1) str = str.substr(0,str.length()-1);
    while(str.find(" ",index) != string::npos){
        if(index!=str.find(" ",index)) count++;
        index = str.find(" ", index)+1;
    }
    cout << count << endl;
    return 0;
}