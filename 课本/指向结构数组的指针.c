#include<stdio.h>
struct st
{
	int b,*n;
	
}*p;
int a[5]={10,20,30,40,50};
struct st s[5]={100,&a[0],200,&a[1],300,&a[2],400,&a[3],500,&a[4]};
int main()
{
	p=s;
	printf("%d\t",p->b++);
	printf("%d\n",p->b);
	printf("%d\t",*p->n);
	printf("%d\n",*++p->n);
	
	return 0;
 } 
