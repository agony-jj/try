#include <stdio.h>
# define swap(a,b){int t = a; a = b; b= t;}//定义了一种宏，用于交换两个变量的值
int main()
{
	int a, b, c;
	printf("请输入三个整数：");
	scanf("%d,%d,%d",&a,&b,&c);
	if (a > b) swap(a,b);//当a > b 成立时，a,b的值交换，b取得二者中的最大值；当 a > b不成立时，b 的值更大，不会执行swap操作。综上，此操作是为了让b取二者中最大的那个值。
	if (b > c) swap(b,c);//原理同上，b取得二者中较小的一个值。
	if (a > b) swap(a,b);//让b取得较大的值，作为三个数中的中位数。
	printf("middle:%d",b);
	return 0 ;
}//优点：没有调用临时变量。缺点：逻辑理解较困难。