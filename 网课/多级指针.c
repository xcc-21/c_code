# include<stdio.h> 
int main(void)
{
	int i = 10;
	int *p = &i;
	int **q = &p;
	int ***r = &q;
	
	r = &p;//error ��Ϊr��int***���ͣ�rֻ�ܴ��int**���ͱ����ĵ�ַ 
	printf("i=%d\n",***r);
	return 0;
}
