#include <stdio.h>
int main()
{
    int a,d;
    char b;
    printf("Enter a 12-hour time(the form should be i : i a/p):\n");
    scanf("%d:%d %c",&a,&d,&b);
    switch (b)
    {
        case'p': printf("Equaivalent 24-hour time:%d:%d",a + 12,d);break;
        case'a': printf("Equaivalent 24-hour time:%d:%d",a ,d);break;//case的最大值那么小的吗，真是离谱
        default : printf("Equaivalent 24-hour time:%d:%d",a,d);
    }
    return 0;
}