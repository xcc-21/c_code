#include<stdio.h>

void arr(int a[],int b[])
{
	int t=0;
	int k = 0;
	for(;k<4;k++)
	t=a;
	a=b;
	b=t;
	return;
}

int main()
{
	int i,j,k;
	int a[2][3]={{12,13,14},{1,2,3}};
	arr(i,j);
	for(k=0;k<4;k++)
	printf("%d%d",a[i],a[j]);
	printf("%d%d",i,j);
	
	
	return 0;
}
