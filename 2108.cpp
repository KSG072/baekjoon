#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    /*초기선언*/
    int n, x;
    scanf("%d", &n);
    int *numbers = (int *)malloc(sizeof(int) * n);
    int mid, most, range;
    double avg = 0;
    /*numbers배열에 입력과 동시에 평균 구하기 위한 합계산*/
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        avg += x;
        numbers[i] = x;
    }

    /*반올림*/
    if(avg < 0) avg = -1 * round((-1*avg)/n);
    else avg = round(avg/n);

    sort(numbers, numbers+n);

    mid = numbers[n/2];
    range = numbers[n-1] - numbers[0];

    /*최빈값구하기*/
    most = numbers[0];
    int count = 1;
    int flag = 1;
    int max_count = 0;
    int prev = numbers[0]; //prev를 첫번째 값으로 초기화 한 후에 그 다음 숫자부터 for문 돌입
    for(int i=1; i<n; i++){
        if(prev == numbers[i]) count++; //같을 경우
        else{//다를 경우
            if((max_count == count) && flag){ //두번째 최빈값이 나왔을 경우 flag를 0으로 바꾸고 최빈값을 바꿔줌으로써, 다음에도 같은 빈도 수의 값이 등장해도 해당 조건을 만족하지 못하고 넘어감.
                flag = 0;
                most = prev;
            }
            else if(max_count < count){ //바뀌었을지도 모를 flag를 초기화 시켜주고 최빈값, 최대빈도수 변경
                max_count = count;
                flag = 1;
                most = prev;
            }
            count = 1; //이번부터 새로운 숫자로 카운팅이 들어가므로 1로 초기화
        }
        prev = numbers[i];
    }
    if((count > max_count) || (flag && (max_count==count))) most = prev; //마지막 숫자가 최빈값일 수도 있으니 마지막으로 검사하기

    printf("%d\n%d\n%d\n%d\n", (int (avg)), mid, most, range);
    return 0;
}