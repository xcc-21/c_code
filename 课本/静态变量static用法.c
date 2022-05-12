#include<stdio.h>

int f(int x)
{
	static int y=0;//静态变量 
//静态变量在编译值赋一次初值，而自动变量赋初值是在函数调用时，每调用一次就要重新赋初值 
		y++;
	return x*y;
}

int main()
{
	int a=2,i;
	for(i=0;i<3;i++)
	printf("%3d\t",f(a)); 
	return 0;
 } 
