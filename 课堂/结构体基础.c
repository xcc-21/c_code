#include<stdio.h>
//定义结构体类型 并且定义变量 
struct //st_score
{
	unsigned short num;
	char name[16]; 
	unsigned china;
	unsigned math;
	unsigned eng;
}stA={1,"zhangsan",60,80,98};//全局变量 

int main(void)
{
	//定义结构体类型的变量 
	//struct st_score stA={1,"zhangsan",50,60,70};//局部变量 
	printf("struct st_score length is %d\n",sizeof(stA));
	printf("name=%s\t china=%d\t math=%d\n",\
					  stA.name,stA.china,stA.math);// stA.表示stA的成员 
	//stA.china=100;
		printf("name=%s\t china=%d\t math=%d\n",\
		stA.name,stA.china,stA.math);//换行书写（'\'续行符，不能有空格在\后面，会有警告） 可用\可不用 
	return 0;
 }
 /*
--------------------------------------------- 
 运行结果为：
 struct st_score length is 32
name=zhangsan    china=60        math=80
name=zhangsan    china=60        math=80
--------------------------------------------
*/
