#include <stdio.h>

int max_val(int a[][4])//返回类型要一致 
//形参数组第一维的长度可以省略 ，但第二维长度不能省略 
{
	int max,i,j;
	max=a[0][0];//max初始化 
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
	if(a[i][j]>max)//比较最大 
	max=a[i][j];
	return max;//需把max返回整形类型 
	
}

int main()
{
	int a[][4]={{1,3,40,5},{4,6,3,8},{94,33,66,77}};
	printf("%d",max_val(a));
	
	
	return 0;
}
