#include<stdio.h>
int main(void)
{
	int a[5];//a是数组名，5是数组元素的个数 元素就是变量 a[0] ——a[4]
//	int a[3][4];//3行4列 a[0][0]是第一个元素a[i][j]第i+1行j+1列
	int b[5];
//	a = b;//error a是常量
	printf("%#x\n",&a[0]); 
	printf("%#x\n",a); 
	 
	return 0;
 } 
 /*
 运行结果为：
 ---------------------- -- 
 0x62fe00
0x62fe00 
-------------------------- 
 */
