// #include <stdio.h>
// void swap(int*p,int *q);
// int main(){
//     int i,j;
//     printf("Enter two number:");
//     scanf("%d%d",&i,&j);
//     swap(&i,&j);
//     printf("%d   %d",i,j);
// }
// void swap(int *p,int * q){
//     int temp = *p;
//     *p = *q;
//     *q = temp;
// }
// #include <stdio.h>
// int main(){
//     char subject[20]="Computer Science";
//     int w,d;
//     scanf("%d%d",&w,&d);
//     printf("%s\n",subject);
//     printf("%*.*s\n",w,d,subject);
//     return 0;
// }
// char digit_to_hex(int digit);
// int main(){
//     // char *a = "The matrix is so fucking crazy";
//     // printf("%s",a);
//     // return 0;
//     int n;
//     char c;
//     scanf("%d",&n);
//     c =  digit_to_hex(n);
//     printf("%c",c);
// } 
// char digit_to_hex(int digit){
//     char ch;
//     ch = "0123456789ABCDEF"[digit];
//     return ch;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
int main(){
    struct{
        int number;
        char name[N+1];
        int age;
    }student1,student2;
    student1.number = 1;
    
    printf("number:%d\nname:%s",student1.number,student1.name);
    
    
    return 0;
}
// int main(){
//     int i;
//     char a[N];
//     printf("Who is the inventor of chinese mumble rap?\n");
//     for(i = 0;i < 3;i++){
//         scanf("%s",a);
//         if(((int)strcmp(a,"sasiovalord")!=0)){
//            if(i != 2) printf("try again\n");
//         }
//         else {printf("good");break;}
       
//     }
//     if (i == 3) printf("The right anwser is sasiovalord.\n");
//     return 0;
// }
// int main(){
//     int a1,a2,a3;
//     char subject[5];
//     char class[7] = {"mystar"};
//     char *p = "mystar";
//     printf("%lu\n",sizeof(char));
//     a1 = strcmp("abc","abcd");
//     a2 = strcmp("abc","abc");
//     a3 = strcmp("abcd","abc");
//     printf("%d\n%d\n%d",a1,a2,a3);
//     return 0;
// }