//需要两个参数，一个是第一个元素的地址，一个长度 
#include<stdio.h>

void f(int * p,int len)
{
	int i;
	for(i=0;i<len;++i)
	printf("%d\t",*(p+i));//*p.*(p+1)}.*(p+2); 
}
int main(void)
{
	int a[5]={1,2,3,4,5};
	int b[6]={-1,-2,-3,-4,-5,-6};
	int c[100]={33,55,76,88,99};
	f(a,5);//a是int * 
	f(b,6);
	f(c,100);

	return 0;
 } 
