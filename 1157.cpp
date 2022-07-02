#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int c, max, alpha[26]={}, index=0;
    bool over = false;
    do{
        c = getchar();
        c>=97 ? alpha[c-97]++ : alpha[c-65]++;
    }while(c!='\n');
    max = *max_element(alpha,alpha+26);
    for(int i=0; i<26; i++){
        if((max==alpha[i])&&over){
            index = -2;
            break;
        }
        else if(max==alpha[i]){
            index = i;
            over = true;
        }
    }
    cout<<char(index+65)<<"\n";
    return 0;
}