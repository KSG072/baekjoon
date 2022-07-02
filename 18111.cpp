#include <iostream>
using namespace std;
int main(){
    //time = -1 중요
    int time=-1, w, h, inven, hf=0, lf=0, dig, cover;
    cin>>w>>h>>inven;
    int field[w][h];
    //입력
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            cin>>field[i][j];
        }
    }
    //high floor, low floor 구하기
    hf = field[0][0];
    lf = field[0][0];
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            if(hf<field[i][j]) hf = field[i][j];
            if(lf>field[i][j]) lf = field[i][j];
        }
    }

    //가장 높은 층부터 가정해서 한층씩 내려가 계산하기
    while (hf>=lf){
        for(int i=0; i<w; i++){
            for(int j=0; j<h; j++){
                //파야할 블록 개수 종합하기
                if(field[i][j]>hf) dig+=field[i][j]-hf;
                //쌓아야할 블록 개수 종합하기
                else if(field[i][j]<hf) cover+=hf-field[i][j];
            }
        }
        //파낸블록+인벤토리에있는블록이 쌓을블록보다 많아야함
        if(inven+dig>=cover && time<0) time = cover + dig*2;//time은 -1로 초기화됐었음
        else if(inven+dig>=cover){
            if(time > cover + dig*2) time = cover + dig*2;
            else break; //예전층보다 더 오래걸리면 종료
        }
        hf--; cover=0; dig=0;
    }
    cout<<time<<" "<<hf+1<<"\n";//더 빨리 끝났던건 '예전'층이므로 hf+1
    return 0;
}