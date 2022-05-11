#include<stdio.h>
int main(void)
{
	int i;
	int sum=0;
	for(i=1;i<101;++i)//循环到101就退出循环
	{
		if (i%2==1)
			sum += i;//等价于sum=sum +i
	}
	printf("sum=%d\n",sum);
	return 0;
}