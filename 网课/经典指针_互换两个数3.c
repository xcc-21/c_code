//可以完成互换功能	2021年4月12日 
#include <stdio.h>
void swap(int *p,int *q)//形参名字是p和q，接收实参数据的是p和q
{
	int t; //如果要互换p和q的值，则t必须是int *，不能是int，否则会出错 
	t = *p;//p是int*，*p是int 
	*p = *q;
	*q = t;
}

int main(void){
	int a=3;
	int b=5;
	swap(&a,&b); 
	printf("a = %d,b = %d\n", a ,b);
	return 0;
} 
