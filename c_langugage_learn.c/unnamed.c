#include <stdio.h>
#include <stdlib.h>
int main()
{
	int V;
	int *p1;//指向变量的指针
	int **p2;//指向指针的指针
	V = 100;
	p1 = &V;
	p2 = &p1;
	printf("var = %d\n", V);//输出V的值
	printf("*p1 = %d\n", *p1);//*p1指向V，输出V的值
	printf("**p2 = %d\n", **p2);//**p2指向p1，*p1再指向V，输出的还是V的值
	printf("p1 = %p\n", p1);//p1里存的是V的地址，输出V的地址
	printf("p1 = %p\n", &p1);//输出p1的地址
	printf("p2 = %p\n", p2);//p2里存的是p1的地址，输出的是p1的地址
	printf("p2 = %p\n", *p2);
    system("pause");
}
