#include <stdio.h>
int main(){
    char function,error_input;
    float num1,num2;
    do{
      printf("Enter the operation of your choice:\n");
      printf("\ta.add   \ts.substract\n");
      printf("\tm.multiply   \td.divide\n");
      printf("\tq.quit\n");
    while((function = getchar()) != 'a'){
      if(function == 's'||function == 'm'||function == 'd'||function == 'q') break;
      printf("Please enter function mentioned above\n");
      while(getchar()!= '\n')
      continue;
    }
    setbuf(stdin,NULL);
    switch(function){
        case 'a': {printf("Enter the first num:");
          while(scanf("%f",&num1)!=1){
            while((error_input = getchar()) != '\n')
              putchar(error_input);
            printf(" is not a num\n");
            printf("Please Enter a num,such as 0.25,-1.78E8,or 3:");
            setbuf(stdin,NULL);
          }
          printf("Enter the second num:");
          while(scanf("%f",&num2)!=1){
            while((error_input = getchar()) != '\n')
              putchar(error_input);
            printf(" is not a num\n");
            printf("Please Enter a num,such as 0.25,-1.78E8,or 3:");
            setbuf(stdin,NULL);
          }
          setbuf(stdin,NULL);
          printf("%f + %f = %f\n",num1,num2,num1 + num2);
        } break;
        case 's': {printf("Enter the first num:");
          while(scanf("%f",&num1)!=1){
            while((error_input = getchar()) != '\n')
              putchar(error_input);
            printf(" is not a num\n");
            printf("Please Enter a num,such as 0.25,-1.78E8,or 3:");
            setbuf(stdin,NULL);
          }
          printf("Enter the second num:");
          while(scanf("%f",&num2)!=1){
            while((error_input = getchar()) != '\n')
              putchar(error_input);
            printf(" is not a num\n");
            printf("Please Enter a num,such as 0.25,-1.78E8,or 3:");
            setbuf(stdin,NULL);
          }
          setbuf(stdin,NULL);
          printf("%f - %f = %f\n",num1,num2,num1 - num2);
        } break;
        case 'm': {printf("Enter the first num:");
          while(scanf("%f",&num1)!=1){
            while((error_input = getchar()) != '\n')
              putchar(error_input);
            printf(" is not a num\n");
            printf("Please Enter a num,such as 0.25,-1.78E8,or 3:");
            setbuf(stdin,NULL);
          }
          printf("Enter the second num:");
          while(scanf("%f",&num2)!=1){
            while((error_input = getchar()) != '\n')
              putchar(error_input);
            printf(" is not a num\n");
            printf("Please Enter a num,such as 0.25,-1.78E8,or 3:");
            setbuf(stdin,NULL);
          }
          setbuf(stdin,NULL);
          printf("%f * %f = %f\n",num1,num2,num1 * num2);
        } break;
        case 'd': {printf("Enter the first num:");
          while(scanf("%f",&num1)!=1){
            while((error_input = getchar()) != '\n')
              putchar(error_input);
            printf(" is not a num\n");
            printf("Please Enter a num,such as 0.25,-1.78E8,or 3:");
            setbuf(stdin,NULL);
          }
          setbuf(stdin,NULL);
          printf("Enter the second num:");
          l1:
          while(scanf("%f",&num2)!=1){
            // if(num2 == 0){
            //     printf("The second num should not be zero\n");
            //     setbuf(stdin,NULL);
            //     printf("Enter the second num:");
            //     continue;
            
            while((error_input = getchar()) != '\n')
              putchar(error_input);
            printf(" is not a num\n");
            printf("Please Enter a num,such as 0.25,-1.78E8,or 3:");
            setbuf(stdin,NULL);
          }
          if(num2 == 0){
                printf("The second num should not be zero\n");
                setbuf(stdin,NULL);
                printf("Enter the second num:");
                goto l1;
            }
          setbuf(stdin,NULL);
          printf("%f / %f = %f\n",num1,num2,num1 / num2);
        } break;
    }
    if(function != 'q'){
    printf("Press [Enter] to continue:");
    while(getchar()!='\n')
      printf("Error!Press [Enter] to continue:");
      while(getchar()!= '\n')
      continue;
    }
    }while(function != 'q');
    printf("Bye");
    return 0;
}
//在该程序中，用户可选择指定运算法则，并输入两个数，得到运算结果。
//该过程可以反复进行，如果需要退出，按q即可。注意，运算法则选定后的执行过程中，程序不能退出。
//该程序表现了getchar和scanf使用时的一些弊端和处理方法，对学习I/O有一定帮助
//该程序也简单设计了一些交互功能，并预判了用户可能在输入的过程中的一些错误。程序较为完整。