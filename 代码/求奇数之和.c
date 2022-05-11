#include<stdio.h>
int main()
{
	int i,
	sum = 0;
	for(i=1;i<=100;i+=2)//i赋初值1，在范围100之间的有限循环，由i的值依次加2，等价于i=i+2
	{sum=sum+i;//从sum+i赋值给sum等于1再加2等于sum3
		printf("sum=%d,%d\n",sum,i);//sum为奇数的和，i为奇数
	}
	for(i=1;i<100;i+=2)
		printf("%d\n",i);
	return 0;
}