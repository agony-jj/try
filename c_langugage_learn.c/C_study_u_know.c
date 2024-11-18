#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a three-digit number :\n");
    scanf("%d",&a);
    b = a / 100;
    c = (a - b*100)/10;
    d = a - b*100 - c*10;
    if (d != 0){
    printf("The reversal is:%d",d*100 + c*10 + b);}
    else {printf("The reversal is:0%d", c*10 + b);}
    return 0;
}