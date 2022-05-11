#include<stdio.h>
int main(void)
{
	char m='A';
	int *p;//定义指针类型的变量 
	p=&m; //将变量m的地址赋值给p 
	printf("&m=0x%p\n",&m);//输出变量m的地址 
	printf("m=%d\n",m);//输出变量m的内容
	printf("&p=0x%p\n",&p) ;//输出变量p的地址 
	printf("p=0x%p\n",p);//输出变量p的内容，就是变量m的地址 
	//变量p的内容是一个地址，取这个地址里的内容 
	printf("*p=%c\n",*p);
	printf("q=0x%p\n",q);
	printf("*q=0x%p\n",*q);
	printf("**q=%d\n",**q);
	return 0;
 } 
