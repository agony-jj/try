#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{   
    int a ,b = 1,i,n;
    time_t t;
    char c;
    srand((unsigned) time(&t));
    L1:
        i = 1;
        n = rand()%100;
        printf("A new number has been chosen.\n");
        a = 0;
        while ( a != n)
        {printf("Enter your guess:\n");
        scanf("%d",&a);
        if (a == n) {printf("You got it in %d guesses.\n",i);}
        else if (a < n) printf("too low.\n");
             else printf("too high.\n");
        i++;
        }
    printf("Play one more time?(Y/N):");
    setbuf(stdin,NULL);
    scanf("%c",&c);

      switch(c){
        case 'Y': goto L1;break;
        case 'N': break;
        }
        
        
    // int i=0,n=0;//有点问题
    // char c;
    // printf("Enter a Message:");
    // scanf("%c",&c);
    // char str[] = c ;
    // while(str[i]){
    //     toupper(str[i]);
    //     i ++;
    // }
    // while(str[n]){
    //     switch(str[n]){
    //         case 'A': 
    //         case 'B':
    //         case 'C': printf("2");break;
    //         case 'D': 
    //         case 'E':
    //         case 'F': printf("3");break;
    //         case 'G': 
    //         case 'H':
    //         case 'I': printf("4");break;
    //         case 'J': 
    //         case 'K':
    //         case 'L': printf("5");break;
    //         case 'M': 
    //         case 'N':
    //         case 'O': printf("6");break;
    //         case 'P': 
    //         case 'R':
    //         case 'S': printf("7");break;
    //         case 'T': 
    //         case 'U':
    //         case 'V': printf("8");break;
    //         case 'W': 
    //         case 'X':
    //         case 'Y': printf("9");break;
    //         default : printf("%c",str[n]);
    //     }
    //     n++;
    // }

    // int x = 1,y,z,n;
//     printf("Enter an integer:");
//     scanf("%d",&n);
//     printf("\n");
//     printf("Pythagorean triple :\n");
//     while (x < n){
//         for(y = 2;y < n;y++){
//             for(z = 3;z <= n;z++){
//                 if (x*x + y*y == z*z && x < y && y < z) printf("\t%d,%d,%d\n",x,y,z);
            
//             }
//             y += 1;
//         }
//         ++x;
//     }
    // int i,n,a,b;
    // printf("Enter number of days in month:");
    // scanf("%d",&b);
    // printf("Enter starting day of the week(1=sun,7=sat):");
    // scanf("%d",&a);
    // printf("\t日\t一\t二\t三\t四\t五\t六\n");
    // for (i = 1;i <a;++i)
    // {printf("\t ");}

    // for (n = 1;n <= b;++n)
    // {
    //  if((n + i - 1)%7 == 0){
    //     printf("\t%d\n",n);
    //  }
    //  else printf("\t%d",n);
    // }
    // int i,j;
    // for(i = 7,j = i - 1;i > 0,j >0;--i,j = i - 1)//注意，在这里语句2使用了逗号且起到了“与”的作用，为什么?
    // {
    //     printf("%d\n",i);
    // }
    // int i;
    // for(i = 10;i >= 1;i /=2)
    // {
    //     printf("%d",++i);
    // }
    // int i = 9876;
    // do{
    //     printf("%d\n",i);
    //     i /= 10;
    // }
    // while(i > 0);

    // int i;
    // for(i = 9876;i > 0;i/=10)
    // {
    //     printf("No. %d\n",i);
    // }
    // int i,n;
    // scanf("%d",&n);
    // if (n <= 2) printf("Prime(Y/N):Y\n");
    // else for (i = 2;i < n;i++){
    //     if (n % i == 0)
    //     goto L1;
    //     else continue;
    //        L1:
    //    if (i < n) {printf("Prime(Y/N):N\n");break;}
    //    else printf("Prime(Y/N):Y\n");
    // }
   
    
//     int i,n,sum;
//     n = 0;
//     while (n < 15){
//         scanf("%d",&i);
//         if (i == 0)
//             {continue;}
//         sum += i;
//         n++;
//     }
//    printf("%d",sum);
   return 0;

}
