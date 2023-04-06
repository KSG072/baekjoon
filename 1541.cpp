#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string input;
    int result = 0;
    int temp=0;
    int flag = 0;
    cin >> input;
    for(char c : input){
        if(isdigit(c)) temp = temp*10 + (c-48);
        else{
            if(flag) result -= temp;
            else{
                if(c == '-') flag = 1;
                result += temp;
            }
            temp = 0;
        }
    }
    flag ? result-=temp : result+=temp;
    cout << result << "\n";
    return 0;
}