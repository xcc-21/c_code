/* 
	2021��4��27��21��22��
ʾ����
	  ���͵�ַ�������� 
Ŀ�ģ� 
	ָ���ŵ�֮һ��
	�����ڴ�С 
	���ٵĴ�������
	ִ���ٶȿ� 
*/ 
#include<stdio.h>
#include<string.h>//�ַ������� 
struct Student
{
	int age;
	char sex;
	char name[100]; 
 } ;//�ֺŲ���ʡ 
void InputStudent(struct Student *);
 void OutputStudent(struct Student *);
int main(void)
{
	struct Student st ;
	printf("%d\n",sizeof(st));
	InputStudent(&st);//�Խṹ�������� ���뷢��st�ĵ�ַ 
	OutputStudent(&st);//�Խṹ��������  ���Է���st�ĵ�ַҲ����ֱ�ӷ���st������  ��Ϊ�˼����ڴ�ķѣ�ҲΪ�����ִ���ٶȣ��Ƽ����͵�ַ 
	return 0;
 } 
 void OutputStudent(struct Student *pst)
 {
 	printf("%d %c %s",pst->age,pst->sex,pst->name);
 }
 void InputStudent(struct Student * pstu)//pstuֻռ4���ֽ�
{
	(*pstu).age=10;
	strcpy(pstu->name,"����");
	pstu->sex='F'; 
	
 } 
