//不能完成互换功能 
#include <stdio.h>

void swap(int *p,int *q){
	int *t;//如果要互换p和q的值，则t必须是int *，不能是int，否则会出错 
	t = p;//正确为 t = *p; 
	p = q;//同上 
	q = t;//同上 
	return;
}

int main(void){
	int a = 3;
	int b = 5;
	swap(&a,&b);//swap(*p,*q)是错误的，swap(a,b)也是错误的 
	printf("a = %d,b = %d\n",a,b);
	return 0;
} 
