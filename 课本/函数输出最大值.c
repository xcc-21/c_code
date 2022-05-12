# include<stdio.h>
int main()
{
	int a,b,c,d,e,m;
	int max(int x,int y);
	a=10,b=12,c=9,d=13,e=5;
	m=max(a,max(b,max(c,max(d,e))));
	printf("%d\n",m);
	return 0;
}
	
	int max(int x,int y)
{
	int z;
	if(x>z)
	z=x;
	if(y>z)
	z=y;
	return z;
 } 
