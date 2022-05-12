//不能完成互换 
#include <stdio.h>
void swap(int a,int b){
	int t;
	t = a;
	a = b;
	b = t;
	return;
}

int main(void){
	int a=3;
	int b=5;
	swap(a,b); 
	printf("a = %d,b = %d\n", a ,b);
	return 0;
} 
