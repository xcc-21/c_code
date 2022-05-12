# include <stdio.h>

void g(int *p,int *q)
{
	
	*p=1;
	*q=2;
	//return;
}
int main(void)
{
	int a = 3,b = 5;
	g(&a,&b);
	printf("%d %d\n",a,b); 
	return 0;
}
