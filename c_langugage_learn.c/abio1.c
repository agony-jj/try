#include <stdio.h>
int main()
{
    float i=0;//int代表数据类型
    printf("请输入（单位：英尺）： ");
    scanf("%f",& i);
    float j=2.54*i;
    printf("%f（cm）",j);
    getchar();
    return 0;
}