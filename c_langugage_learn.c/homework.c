#include <stdio.h>
#include <ctype.h>
int main(){
    char c,biff[100];
    int i,n;
    i = 0;
    while((c = getchar())!= '\n'){
        biff[i] = c;
        i++;
    }
    n = sizeof(biff)/sizeof(biff[0]);
    for(i = 0;i <=n;++i){
       biff[i] = toupper(biff[i]);
    }
    for(i = 0;i <= n;++i){
        switch(biff[i]){
            case 'A': biff[i] = '4';break;
            case 'B': biff[i] = '8';break;
            case 'E': biff[i] = '3';break;
            case 'I': biff[i] = '1';break;
            case 'O': biff[i] = '0';break;
            case 'S': biff[i] = '5';break;
        }
    }
    for(i = 0;i <= n;++i){
        printf("%c",biff[i]);
    }
    printf("!!!!!!!!!!");
return 0;
}