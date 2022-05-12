#include<stdio.h>
int main(void)
{
	int *p;
	int i=3;
	*p=i;//earry,应该为*p=&i；（不会报错） 
	printf("%d",*p);
	return 0;
 } 
