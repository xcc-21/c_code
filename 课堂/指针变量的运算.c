#include<stdio.h>
int main(void)
{
	int j = 5;
	int i = 10;
	int * p= &i;
	int * q =&j;
	//p-q 没有实际意义 
	int a[5];
	p = &a[1];
	q = &a[4];
	printf("p和q所指向的单元相隔%d个单元\n",q-p);
	return 0;
 } 
 /*
 指针变量不能相加 不能相乘 不能相除
 如果两个指针变量指向的是同一块连续空间中的不同存储 
 则这两个指针变量才可以相减 
 
 */ 
