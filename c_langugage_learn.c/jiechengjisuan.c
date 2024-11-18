#include <stdio.h>
int main(){
    int num[2],n,i;
    char c;
    while((c = getchar()) != '\n'){
        c = getchar();
        num[n] = c - '0';
        n++;
    }
    printf("The original order is:");
    for(n = 0;n <= 2;++n){
       printf("%3d",num[n]);
    }
    return 0;
}