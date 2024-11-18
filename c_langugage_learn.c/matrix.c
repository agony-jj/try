#include <stdio.h>
#define N 10
int main(){
    int ident[N][N];
    int row,col;
    for(row = 0;row < 10;row ++){
        for(col = 0;col <10;col++){
            if(row == col)
                ident[row][col] = 1;
            else 
                ident[row][col] = 0;
        }
    }
    for(row = 0;row < N;row ++){
        printf("|");
        for(col = 0;col < N;col ++){
            printf("%3d",ident[row][col]);
        }
    printf(" |\n");
    }
return 0;
}