//��Ҫ����������һ���ǵ�һ��Ԫ�صĵ�ַ��һ������ 
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
	f(a,5);//a��int * 
	f(b,6);
	f(c,100);

	return 0;
 } 
