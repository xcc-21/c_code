/*
	2021年4月27日21点22分
	通过函数完成对结构体变量的输入和输出 
*/ 
#include<stdio.h>
#include<string.h>//字符串调用 
struct Student
{
	
	int age;
	char sex;
	char name[100]; 
	
 } ;//分号不能省 
 
 

int main(void)
{
	struct Student st ;//21行 
	
	InputStudent(&st);//对结构体变量输出 必须发送st的地址 
	//printf("%d %c %s",st.age,st.sex，st.name);
	OutputStudent(st);//对结构体变量输出  可以发送st的地址也可以直接发送st的内容 
	return 0;
 } 
 void OutputStudent(struct Student ss)
 {
 	printf("%d %c %s",ss.age,ss.sex,ss.name);
 }
 void InputStudent(struct Student * pstu)//pstu只占4个字节
{
	(*pstu).age=10;
	strcpy(pstu->name,"张三");
	pstu->sex='F'; 
	
 } 
