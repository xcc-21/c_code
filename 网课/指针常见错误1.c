#include<stdio.h>
int main(void)
{
	int *p;
	int i=3;
	*p=i;//earry,Ӧ��Ϊ*p=&i�������ᱨ�� 
	printf("%d",*p);
	return 0;
 } 
