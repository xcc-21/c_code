#include<stdio.h>
//����ṹ������ ���Ҷ������ 
typedef struct st_score
{
	unsigned short num;
	char name[16]; 
	unsigned china;
	unsigned math;
	unsigned eng;
}st_score;
//�ṹ�����͵ı�����Ϊ�������β� 
int total_score(st_score st)
{
	return st.china+st.eng+st.math;
}

int main(void)
{
	//����ṹ�����͵ı��� 
	struct st_score st[3]={{1,"zhangsan",50,60,70},\
		{2,"lisi",55,65,75},{3,"wangwu",90,70,80}};
	printf("struct st_score length is %d\n",sizeof(st[0]));
	struct st_score *s;
	s=st;
	int i;
	for(i=0;i<3;i++)
	printf("name=%s\t china=%d\t math=%d\t eng=%d\n",\
		(s+i)->name,(s+i)->china,(s+i)->math,(s+i)->eng);// stA.��ʾstA�ĳ�Ա 
		for(i=0,i<3,i++)
	int t=total_score(st[i]);
	
	
	printf("t=%d,%d,%d",t,t,t);
	
	return 0;
 }
