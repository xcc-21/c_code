//������ɻ�������	2021��4��12�� 
#include <stdio.h>
void swap(int *p,int *q)//�β�������p��q������ʵ�����ݵ���p��q
{
	int t; //���Ҫ����p��q��ֵ����t������int *��������int���������� 
	t = *p;//p��int*��*p��int 
	*p = *q;
	*q = t;
}

int main(void){
	int a=3;
	int b=5;
	swap(&a,&b); 
	printf("a = %d,b = %d\n", a ,b);
	return 0;
} 
