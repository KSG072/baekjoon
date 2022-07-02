#include <iostream>
#include <string.h>
using namespace std;
int check_board(char**, int, int, char);
int main(){
    char** board;
    int row, col;
    scanf("%d %d", &row, &col);
    board = (char**) malloc(sizeof(char*)*row);
    for(int i=0; i<row; i++) board[i] = (char*) malloc(sizeof(char)*col);
    int min = 64, temp, if_B, if_W;

    for(int i=0; i<row; i++){
        scanf("%s", board[i]);
    }

    for(int i=0; i<=row-8; i++){
        for(int j=0; j<=col-8; j++){
            if_B = check_board(board,i,j,'B');
            if_W = check_board(board,i,j,'W');
            temp = if_B < if_W ? if_B : if_W;
            if(min > temp) min = temp; 
        }
    }
    printf("%d\n", min);
    return 0;
}

int check_board(char** board, int start_row, int start_col, char first_color){
    int count = 0;
    for(int i=start_row; i<start_row+8; i++){
        for(int j=start_col; j<start_col+8; j++){
            if(i % 2 == 0){
                if(j % 2 == 0){
                    if(board[i][j] != first_color) count++;
                }
                else if(board[i][j] == first_color) count++;
            }
            else{
                if(j % 2 == 0){
                    if(board[i][j] == first_color) count++;
                }
                else if(board[i][j] != first_color) count++;
            }
        }
    }
    return count;
}