#include<stdio.h>
int p_add(int,int);
int p_mul(int,int);
int main(void)
{
	int(*p)(int ,int);
	//p是指针类型的变量  p的内容是一个地址，
	//对这个地址访问的时候，遵循函数规则（函数类型）
	//函数的名字就是函数的入口地址 
	int va=6,vb=2;
	p=p_add; 
	printf("%d+%d=%d\n",va,vb,p(va,vb)); 
	p=p_mul;
	printf("%d*%d=%d\n",va,vb,p(va,vb));
//	return 0;
}
