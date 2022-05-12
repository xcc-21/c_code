#include<stdio.h>
//void代表没有返回值 
void output(void){//函数的定义 
	printf("hell word...\n");
	printf("mett you!..."); 
	printf("\n");
	return;
}
void input(int x,int y){

	printf("hell word...coutn%d\n",x);
	printf("mett you!...time%d\n",y); 
}
int p_add(int a,int b){
	int z;
	z=a+b;
	return z;
}
int main(void)
 {
	output();//函数的调用 
	input(99,88);
	int ret=p_add(30,40);
	printf("ret=%d\n",ret);
	printf("50+70=%d\n",p_add(50,70));	
	return 0;	
}
