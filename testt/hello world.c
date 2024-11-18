#include <stdio.h>
int main()//()用来表示main是一种函数
{
   char c;
   int b;
   scanf("%c",c);
   switch(c){
    case 'Y': b = 1;break;
    case 'N': b = 0;break;
   }
   printf("%d",b);
   return 0;
}