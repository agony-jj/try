#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main(){
    char a[N][N+1],word;
    int i,j,n,direction,flag = 0,t,temp[4]={4,4,4,4};
    for(i = 0;i < N ;++i){
        for(j = 0;j < N ; ++j){
            a[i][j] = '.';
        }
    }//将数组元素全部初始化为'.'；
    srand(time(NULL));
    for(i = 0,j = 0,a[0][0] = 'A',word = 'A';a[i][j] != 'Z';){
        do
        {
        n = rand();
        direction = n%4;}
        while(direction == temp[0]||direction == temp[1]||direction == temp[2]);
        if(direction == 0 && i - 1 != -1){
            if(a[i - 1][j] == '.'){
                a[i-1][j] = word + 1;
                word++;
                i--;
                flag = 1;
            }
        }
        if(direction == 1 && i + 1 != N+1){
            if(a[i + 1][j] == '.'){
                a[i+1][j] = word + 1;
                word++;
                i++;
                flag = 1;
            }
        }
        if(direction == 2 && j - 1 != -1){
            if(a[i][j - 1] == '.'){
                a[i][j - 1] = word + 1;
                word++;
                j--;
                flag = 1;
            }
        }
        if(direction == 3 && j + 1 != N){
            if(a[i][j+1] == '.'){
                a[i][j+1] = word + 1;
                word++;
                j++;
                flag = 1;
            }
        }
        if(flag == 1){
            for(t=0;t < 4;t++)
            {
            temp[t] = 4;
            }
            t=0;
            flag = 0;
        }
        else {temp[t] = direction;t++;}
        if(t == 4) break; }
    for(i = 0;i < N; ++i){
        for(j = 0;j < N; ++j)
        {
            printf("%3c",a[i][j]);
        }
        printf("\n");
    }//将标记后的数组输出
    return 0;
}//vscode 上运行的没毛病，但是icoding愣住了，怎么办？
//解答你的疑惑，icoding使用的是linux系统，对数组边界的检查黑严格，而vscode是win系统，对此不敏感。之前的程序没有考虑‘\0’，所以出现了越界的状况。