#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stu{
	unsigned short num;
	char name[16];
	unsigned int china;
	unsigned int math;
	unsigned int eng;
}stu_t;

void *creat_node(void){
	stu_t *new;//悬空指针 野指针
	//malloc 返回void * 
	//malloc 分配的内存在堆里，
	//堆不会随着函数的结束而释放空间 
	new=(stu_t *)malloc(sizeof(stu_t)); //计算stu_t的内存给malloc  
	if(new==NULL){//返回NULL 函数调用失败 
		printf("malloc error...\n");
		return NULL; 
	}
	return new;//new是自动局部变量放栈 
}

int main(void){
	stu_t *p=(stu_t *)creat_node();
	p->num=103;
	strcpy(p->name,"lisi");
	p->china=70;p->math=40;p->eng=90;
	printf("name:%s\tmath:%d\teng:%d\n",\
		p->name,p->math,p->eng);
	//程序执行到这里的时候，动态分配的地址不需要了
	free(p); 
	p=NULL; 
	return 0;
} 
