/*
	2021��4��27��21��22��
	ͨ��������ɶԽṹ��������������� 
*/ 
#include<stdio.h>
#include<string.h>//�ַ������� 
struct Student
{
	
	int age;
	char sex;
	char name[100]; 
	
 } ;//�ֺŲ���ʡ 
 
 

int main(void)
{
	struct Student st ;//21�� 
	
	InputStudent(&st);//�Խṹ�������� ���뷢��st�ĵ�ַ 
	//printf("%d %c %s",st.age,st.sex��st.name);
	OutputStudent(st);//�Խṹ��������  ���Է���st�ĵ�ַҲ����ֱ�ӷ���st������ 
	return 0;
 } 
 void OutputStudent(struct Student ss)
 {
 	printf("%d %c %s",ss.age,ss.sex,ss.name);
 }
 void InputStudent(struct Student * pstu)//pstuֻռ4���ֽ�
{
	(*pstu).age=10;
	strcpy(pstu->name,"����");
	pstu->sex='F'; 
	
 } 
