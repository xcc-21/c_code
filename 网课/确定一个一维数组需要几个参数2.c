/*
2021年4月12日21点22分 
一定要明白9行的p[3]和14。16行的a[3]是同一个变量 
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
