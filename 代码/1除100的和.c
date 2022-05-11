#include<stdio.h>
int main(void)
{
	int i;
	float sum = 0;
	for(i=1;i<=100;i++)
	{
		sum = sum+1/(float)i;//是🆗的
		//sum = sum +(float)1/i;这样写是不对的
		//更简单的写法是：sum = sum +1.0/i; 推荐使用
	}
	printf("sum = %f,i=%d\n",sum,i);//float必须用%f输出
	return 0;
}
/*总结：
1-> i=1 1<100 成立
	sum=0+1.00=1  i++ i=2
2-> i=2 2<100成立
	sum=1+1/2.0   i++ i=3
3-> i= 3 3<100 成立
	sum=1+1/2.0+1/3.0 i++ i=4
················
················
*/