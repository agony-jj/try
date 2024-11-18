#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    int c;
    fp = fopen("C:\\codeman\\pypy\\_bealone.txt","r");
    if(fp == NULL){
        printf("Error in opening file");
        return -1;
    }
    while(1){
        c = fgetc(fp);
        if(feof(fp)){
            break;
        }
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}//about how to read file and how to write file
