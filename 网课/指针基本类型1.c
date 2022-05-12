# include <stdio.h>
int main(void){
	int * p;//等价于int* p，也等价于int *p；
	int i = 5;
	char ch = 'A';
	p = &i;//*p以p的内容为地址的变量
	//p = &ch;error
	//p = ch;error
	//p = 5;error
	*p = 99;
	printf("i = %d,*p = %d\n",i,*p);
	
	return 0; 
	
} 
