/*
2021��4��12��21��22�� 
һ��Ҫ����9�е�p[3]��14��16�е�a[3]��ͬһ������ 
*/
# include <stdio.h>

void f(int * p,int len)
{
	p[3]=88;
}
int main(void)
{
	int a[6]={1,2,3,4,5};
	printf("%d\n",a[3]);//4
	f(a,6);
	printf("%d\n",a[3]);//88
	return 0;
 } 
