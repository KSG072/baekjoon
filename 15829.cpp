#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    char* hash = (char*) malloc(n * sizeof(char));
    cin >> hash;
    long long int answer = 0;
    long long int temp = 1;

    for(int i=0; i<n; i++){
        temp = hash[i]-96;
        for(int j=0; j<i; j++){
            temp *= 31;
            temp %= (long long int) 1234567891;
        }
        answer += temp;
        answer %= (long long int) 1234567891;
    }
    cout << answer << "\n";
}