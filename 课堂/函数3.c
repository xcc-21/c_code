#include <stdio.h>
/*
函数的功能： 
有没有返回值，返回值的类型是什么？返回值代表的含义是什么？
函数参数的个数，类型，所代表的意义 
*/ 
/*
函数的功能：实现两个整形变量值的交换
返回值：void
参数：两个整形指针的形参 
*/ 
void swap(int *x,int *y){
	int tmp;
	tmp=*x;
	*x=*y;
	*y=tmp; 
	return ;
} 
int main(void)
{
	int v_a=6,v_b=2;
	printf("swap befor v_a=%d\tv_b=%d\n",v_a,v_b);//\t tab 键 
	swap(&v_a,&v_b);//int *x=&v_a,int *y=v_b;
	printf("swap after v_a=%d\tv_b=%d",v_a,v_b);
	
	return 0;
}
/*
运行结果：
swap befor v_a=6        v_b=2
swap after v_a=2        v_b=6
*/
