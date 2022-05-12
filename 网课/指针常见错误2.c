#include<stdio.h>
int main(void)
{
	int *q; 
	int *p;
	int i=3;
	p=&i;
	//*q=p;//erry 语法编译出错 
	//*q=p;//erry类型不同 ，*q没有赋值 
	p=q; //q是垃圾值，q赋给p，p也变成垃圾值
	
	printf("%d\n",*q);
	/* 
		q的空间是属于本程序的，所有本程序可以读写q的内容，
		但是如果q内部是垃圾值，*则本程序不能读写*q的内容 
		因为*q所代表的内存单元的控制权限并没有分配给本程序
		所有本程序运行到12行时就会立即出错 
	*/ 
	return 0;
 } 
