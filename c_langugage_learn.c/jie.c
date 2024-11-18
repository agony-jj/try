#include <stdio.h>
int main(){
    int n , i ;
    double a = 1,b = 2,c,d;
    printf("Enter the expected terms:\n");
    scanf("%d",&n);
    c = (a + b) / 2;
    i = 1;
    while (i <= n)
    {
        d = c*c - c - 1;
      if(d < 0) c = (c + b)/2;
      else c = (c + a)/2;
      i++;
    }
    printf("%lf",c);
    return 0;
}