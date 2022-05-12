//结构体中包含另一个结构体类型的成员
# include <stdio.h>
typedef struct date
{
	int y;//year
	int m;//month
	int d;//day
	
}date_t;
//这个结构体类型中包含另一个结构体类型的成员 
typedef struct student
{
	
	unsigned short num;
	char name[16];
	struct date birth;
	//struct stdent st;//error
	//sturct stdent *next;//right(c面试必考题)
	int (*get_age)(struct student*);//*get_age指针类型变量64位机占8位，返回值类型int 
} stu_t;

int g_age(stu_t *zx)
{
	return zx->birth.y;
	
 } 

int main()
{
	stu_t st={101,"zhangsan",2000,9,4,g_age};
	printf("name=%s\t birthday=%d-%d-%d\n",st.name,\
		st.birth.y,st.birth.m,st.birth.d); 
		printf("year of birthday is %d\n",st.get_age(&st));//st成员22行到24行的指向get_age的指向birth.y 
	
	return 0;
 } 
