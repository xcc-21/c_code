//�ṹ���а�����һ���ṹ�����͵ĳ�Ա
# include <stdio.h>
typedef struct date
{
	int y;//year
	int m;//month
	int d;//day
	
}date_t;
//����ṹ�������а�����һ���ṹ�����͵ĳ�Ա 
typedef struct student
{
	
	unsigned short num;
	char name[16];
	struct date birth;
	//struct stdent st;//error
	//sturct stdent *next;//right(c���Աؿ���)
	int (*get_age)(struct student*);//*get_ageָ�����ͱ���64λ��ռ8λ������ֵ����int 
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
		printf("year of birthday is %d\n",st.get_age(&st));//st��Ա22�е�24�е�ָ��get_age��ָ��birth.y 
	
	return 0;
 } 
