# include <stdio.h>
#include<string.h>
struct st{
	
	int score;
	char name[10];//��Ҫ��char�ڴ�ռ� 
	int year;
	
};
fun(struct st*s)//�ṹָ���������β� 
{
	s->score=120;
	strcpy(s->name,"lisi");//�ַ���������strcpy 
	s->year;
}


int main()
{
	struct st a={100,"zhangsan",50},*p=&a;
	printf("%d,%s,%d\n",p->score,p->name,p->year);
	fun(p);//�ṹָ��������ʵ��  
	printf("%d,%s,%d\n",p->score,p->name,p->year);
	
	
	return 0;
}
