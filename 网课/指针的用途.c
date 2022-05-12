# include <stdio.h>

void outArr(int * p,int len)
{
	//p[2]=10;//p[2]==*(p+2)==*(a+2)==a[2]
	int i;
	for(i=0;i<len;++i)
	printf("%d\n",p[i]);
 } 
 
int main(void)
{
	int a[5]={1,2,3,4,5};
	//printf("%d\n",a[2]);
	outArr(a,5);
	//printf("%d\n",a[2]);
	//a=&a[2];//error 因为a是常量 
	//printf("%#x,%#x\n",a,&a[0]);
	//a==a[0];
	
	
	return 0;
	
}
