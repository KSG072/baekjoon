#include <iostream>
using namespace std;
int simul();
int main(){
    int count;
    cin>>count;
    int result[count];
    for (int i = 0; i < count; i++){
        result[i] = simul();
    }
    for (int i = 0; i < count; i++){
        cout<<result[i]<<endl;
    }
    return 0;
}
int simul(){
    int n, w, stack=0;
    cin>>n>>w;
    int tagon[2][n];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < n; j++){
            cin>>tagon[i][j];
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < n; j++){
            if (tagon[i][j]>0){
                if (j<n-1){
                    if (tagon[i][j+1] > 0 && tagon[i][j] + tagon[i][j+1] <= w){
                        tagon[i][j] = -1;
                        tagon[i][j+1] = -1;
                        stack++;
                    }
                }
                else if (tagon[i][0] > 0 && tagon[i][j] + tagon[i][0] <= w){
                    tagon[i][0] = -1;
                    tagon[i][n-1] = -1;
                    stack++;
                }
                if (i==0 && tagon[i][j]>0 && tagon[i][j] + tagon[i+1][j] <= w){
                    tagon[i][j] = -1;
                    tagon[i+1][j] = -1;
                    stack++;
                }
            }
        }
    }
    return 2*n-stack;
}
/*
2 2
1 2
2 1
3 7
1 4 2
5 7 2
5 46
23 43 46 25 17
45 45 32 20 1
4 50
1 1 1 1
1 1 1 1
3 10
10 10 10
10 10 10
6 34
32 1 23 22 14 2
1 33 26 12 20 9
*/