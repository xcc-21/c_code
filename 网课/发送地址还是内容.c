/* 
	2021年4月27日21点22分
示例：
	  发送地址还是内容 
目的： 
	指针优点之一：
	耗用内存小 
	快速的传送数据
	执行速度快 
*/ 
#include<stdio.h>
#include<string.h>//字符串调用 
struct Student
{
	int age;
	char sex;
	char name[100]; 
 } ;//分号不能省 
void InputStudent(struct Student *);
 void OutputStudent(struct Student *);
int main(void)
{
	struct Student st ;
	printf("%d\n",sizeof(st));
	InputStudent(&st);//对结构体变量输出 必须发送st的地址 
	OutputStudent(&st);//对结构体变量输出  可以发送st的地址也可以直接发送st的内容  但为了减少内存耗费，也为了提高执行速度，推荐发送地址 
	return 0;
 } 
 void OutputStudent(struct Student *pst)
 {
 	printf("%d %c %s",pst->age,pst->sex,pst->name);
 }
 void InputStudent(struct Student * pstu)//pstu只占4个字节
{
	(*pstu).age=10;
	strcpy(pstu->name,"张三");
	pstu->sex='F'; 
	
 } 
