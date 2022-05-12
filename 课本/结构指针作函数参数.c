# include <stdio.h>
#include<string.h>
struct st{
	
	int score;
	char name[10];//需要给char内存空间 
	int year;
	
};
fun(struct st*s)//结构指针作函数形参 
{
	s->score=120;
	strcpy(s->name,"lisi");//字符串操作需strcpy 
	s->year;
}


int main()
{
	struct st a={100,"zhangsan",50},*p=&a;
	printf("%d,%s,%d\n",p->score,p->name,p->year);
	fun(p);//结构指针作函数实参  
	printf("%d,%s,%d\n",p->score,p->name,p->year);
	
	
	return 0;
}
