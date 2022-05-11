#include <stdio.h>
int main()
{ 
	int f1=1,f2=1;
	int i;
	for(i=1; i<=10; i++)	//每个循环输出2个月的数据，故只需循环20次
	{
		printf("%1d%1d\n",f1,f2);	//输出已知的两个月的兔子数

		f1=f1+f2; 		//计算出下一个月的兔子数，并存放在f1中
		f2=f2+f1; 		//计算出下两个月的兔子数，并存放在f2中
	}
	return 0;
}

