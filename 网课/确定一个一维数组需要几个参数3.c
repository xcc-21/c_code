# include <stdio.h>
void f(int * p,int len)
{
	int i;
	for(i=0;i<len;++i)
	printf("%d",p[i]);//*(p+i)�ȼ���p[i]Ҳ�ȼ���b[i] Ҳ�ȼ���*(b+i) 
	printf("\n"); 
}
int main(void)
{
	int b[6]={-1,-2,-3,-4,-5,-6};
	f(b,6);void f(int * p,int len)
{
	int i;
	for(i=0;i<len;++i)
	printf("%d\t",*(p+i));//*p.*(p+1)}.*(p+2); 
}
	return 0;
 } 
