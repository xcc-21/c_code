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
	stu_t *new;//����ָ�� Ұָ��
	//malloc ����void * 
	//malloc ������ڴ��ڶ��
	//�Ѳ������ź����Ľ������ͷſռ� 
	new=(stu_t *)malloc(sizeof(stu_t)); //����stu_t���ڴ��malloc  
	if(new==NULL){//����NULL ��������ʧ�� 
		printf("malloc error...\n");
		return NULL; 
	}
	return new;//new���Զ��ֲ�������ջ 
}

int main(void){
	stu_t *p=(stu_t *)creat_node();
	p->num=103;
	strcpy(p->name,"lisi");
	p->china=70;p->math=40;p->eng=90;
	printf("name:%s\tmath:%d\teng:%d\n",\
		p->name,p->math,p->eng);
	//����ִ�е������ʱ�򣬶�̬����ĵ�ַ����Ҫ��
	free(p); 
	p=NULL; 
	return 0;
} 
