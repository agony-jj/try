#include <stdio.h>
#include <math.h>
int main()
#define area(a,b,c,p) (sqrt((p)*((p)-(a))*((p) -(b))*((p) -(c))))
{
    int a,b,c,p;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    p = (a + b + c)/2;
   
    if ((a + b > c) && (b + c > a) && (a + c > b))printf("The area is:%f",area(a,b,c,p));
    else printf("not exist");
    return 0;
}