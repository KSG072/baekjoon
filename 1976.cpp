#include <iostream>
using namespace std;
int find_root(int* cities, int city_num){
    if(cities[city_num] == city_num) return city_num;
    else return find_root(cities, cities[city_num]);
}
int main(){
    int n, m, result=1;
    int group_index = 1;
    int cities[201] = {0,};
    int connected[200] = {0,};
    for(int i=0; i<201; i++) cities[i] = i;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           scanf("%d", connected+j);
        }
        for(int j=i; j<n; j++){
            if(connected[j]) cities[j] = i;
        }
        for(int i=0; i<n; i++){
        printf("%d ", cities[i]);
    }
    }
    for(int i=0; i<n; i++){
        printf("%d ", cities[i]);
    }
    int togo;
    scanf("%d", &togo);
    int root = find_root(cities, togo-1);
    for(int i=0; i<m-1; i++){
        scanf("%d", &togo);
        int next = find_root(cities, togo);
        if(root != next) result = 0;
    }
    result ? printf("YES\n") : printf("NO\n");
    return 0;
}