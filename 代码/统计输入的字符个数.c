#include<stdio.h>
void main()
{
	int n=0;
	printf("input a string:\n");
	while(getchar()!='\n')
	{
		++n;

	}
	printf("%d",n);
}
/*
················
本例程序中的循环条件为getchar()!='\n'，其意义是：
只要从键输入的不是回车就继续循环。
循环体n++完成对输入字符个数计数。
从而程序实现了对输入一行字符的字符个数计数
················
*/