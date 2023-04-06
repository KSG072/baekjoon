#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, day, month, year;
    int amount;
    int min=2147483647, max=-1;
    string name;
    string youngest, oldest;
    cin >> n;
    for (int i = 0; i < n; i++){
       cin >> name >> day >> month >> year;
        amount = year*360 + month*30 + day;
        if(min > amount){
            min = amount;
            oldest = name;
        }
        if(max < amount){
            max = amount;
            youngest = name;
        }
    }
    cout << youngest <<"\n"<< oldest <<"\n";
    return 0;
}