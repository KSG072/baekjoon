#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main(){
    cout<<setprecision(16);
    int n;
    double score[1001]={}, high, sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>score[i];
        sum += score[i];
    }
    high = *max_element(score, score+n);
    cout<<(sum/high*100)/n<<"\n";
    return 0;
}