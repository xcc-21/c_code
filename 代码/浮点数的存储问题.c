/*
	2020年12月16日16点10分
	本程序不对，因为循环中更新的变量不能定义为浮点型
*/

#include<stdio.h>
int main(void)
{
	float i;
	float sum = 0;
	for(i=1.0;i<100;++i)//浮点型不能保证可以精确的存储一个小数
	{
		sum = sum +1/i;
	}
	printf("sum = %f\n",sum);
	return 0;
}