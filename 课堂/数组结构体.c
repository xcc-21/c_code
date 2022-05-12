#include<stdio.h> 
//定义结构体类型 并且定义变量 
 typedef struct st_score
{
	unsigned short num;
	char name[16]; 
	unsigned china;
	unsigned math;
	unsigned eng;
}st_score;

int main(void)
{
	//定义结构体类型的变量 
     st_score st[3]={{1,"zhangsan",50,60,70},\
		{2,"lisi",55,65,75},{3,"wangwu",90,70,80}};
	printf("struct st_score length is %d\n",sizeof(st[0]));
	int i;
	for(i=0;i<3;i++)
	printf("name=%s\t china=%d\t math=%d\n",\
				st[i].name,st[i].china,st[i].math);// stA.表示stA的成员 
	return 0;
 }
