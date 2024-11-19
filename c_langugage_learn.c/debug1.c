#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define step_east()  (++j)
#define step_west()   (--j)
#define step_north()  (--i)
#define step_south()   (++i)
int main()
{
    srand(time(NULL));
    int a[N+2][N+2];
    int i,j;
    for(i=0;i<N+2;i++)
    {
        a[i][0]=a[i][N+1]=0;
        a[0][i]=a[N+1][i]=0;
    }//设置边界
    for(i=1;i<N+1;++i)
    {
        for(j=1;j<N+1;j++)
        {
            a[i][j]='.';
        }
    }//初始化棋盘
    i=1;j=1;
    int m;
    char t;//代表标记的字母
    t='A';
    while(t<='Z')
   {
       if(a[i][j]=='.')
     {
        a[i][j]=t;
        t++;//第一轮使(1,1)处为A
        m=rand()%100;
        m=m%4;//真省啊
        switch(m)
        {
        case 0:step_east();break;
        case 1:step_west();break;
        case 2:step_north();break;
        case 3:step_south();break;
        }
     }//奇怪的逻辑，为什么要标记后再移动
     else 
     {
        switch(m)
        {
        case 0:step_west();break;
        case 1:step_east();break;
        case 2:step_south();break;
        case 3:step_north();break;
        }
        m=rand()%100;
        m=m%4;
        switch(m)
        {
            case 0:step_east();break;
            case 1:step_west();break;
            case 2:step_north();break;
            case 3:step_south();break;
        
        }
     }
    }
    for(i=1;i<N+1;i++)
    {
        for(j=1;j<N+1;j++)
        {
            if(a[i][j]=='.')
            {
                printf(".");
            }
            else 
            {
                printf("%c",a[i][j]);
            }
            
        }
        putchar('\n');
    }
    return 0;
}