#include<stdio.h>
void func(char *str)
{
	printf("hell0...%s\n",str);
	return;
}
int main(void) 
{
	char name[]="zhangshang";
	func(name);
	return 0;
}
