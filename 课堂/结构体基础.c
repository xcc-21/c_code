#include<stdio.h>
//����ṹ������ ���Ҷ������ 
struct //st_score
{
	unsigned short num;
	char name[16]; 
	unsigned china;
	unsigned math;
	unsigned eng;
}stA={1,"zhangsan",60,80,98};//ȫ�ֱ��� 

int main(void)
{
	//����ṹ�����͵ı��� 
	//struct st_score stA={1,"zhangsan",50,60,70};//�ֲ����� 
	printf("struct st_score length is %d\n",sizeof(stA));
	printf("name=%s\t china=%d\t math=%d\n",\
					  stA.name,stA.china,stA.math);// stA.��ʾstA�ĳ�Ա 
	//stA.china=100;
		printf("name=%s\t china=%d\t math=%d\n",\
		stA.name,stA.china,stA.math);//������д��'\'���з��������пո���\���棬���о��棩 ����\�ɲ��� 
	return 0;
 }
 /*
--------------------------------------------- 
 ���н��Ϊ��
 struct st_score length is 32
name=zhangsan    china=60        math=80
name=zhangsan    china=60        math=80
--------------------------------------------
*/
