#include <stdio.h>
#define change(a,b) {int t = a;a = b;b = t;}
#define max(a,b) (a > b ? a : b)
int main()
{
    int a = 7 ,b =8;
    change(a,b);
    printf("%d,%d\n",a,b);
    printf("%d",max(a,b));
    return 0;
}